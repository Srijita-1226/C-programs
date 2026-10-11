/* Write a c program to check whether a number is an armstrong number or not. 

  An Armstrong Number is a number that is equal to the sum of its digits, where each digit is raised to the power of the 
  total number of digits.
  For example, 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 */

#include <stdio.h>

int main()
{

    int num, n1, og, rem, p, sum = 0, c = 0;

    printf("Enter the number = ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input");
        return 0;
    }

    n1 = num;
    og = num;

    // Finding the number of digits
    do
    {
        num = num / 10;
        c++;
    } while (num > 0);

    while (n1 > 0)
    {
        rem = n1 % 10;

        // Raising digit to the power of c
        p = 1;
        for (int i = 0; i < c; i++)
        {
            p = p * rem;
        }

        sum = sum + p;
        n1 = n1 / 10;
    }

    if (sum == og)
    {
        printf("Yes, %d is an Armstrong Number", og);
    }

    else
    {
        printf("No, %d is not an Armstrong Number", og);
    }
    
    return 0;
}
