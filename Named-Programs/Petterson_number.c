/* Write a c program to check whether a number is a peterson number or not. 
logic for perterson number :-   A number is a Peterson number if the sum of the factorials of its digits equals the number.
                                Example :   145 = 1! + 4! + 5! = 145   */

#include <stdio.h>
int main()
{
    int num, og, d, fact, sum=0;
    printf("Enter the number : ");
    scanf ("%d", &num);

    // storing the number into another variable
    og = num;

    while(num!=0)
    {
        // extracting the last digit
        d = num % 10;
        
        fact = 1;
        for (int i = 1; i <= d; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }

    // checking the number
    if (og == sum)
        printf (" Yes, %d is a Petterson Number. ",og);
    else
        printf ("No, %d is not a Petterson Number. ", og);
    return 0;
}

