/* Write a c program to check whether a number is an NIVEN NUMBER or not.
   Logic :- A Niven Number is a number that is exactly divisible by the sum of its digits. 
   For example, 21 : 2+1 = 3; 21/3 = 7.*/

// Also known as HARSHAD NUMBER. 

#include <stdio.h>

int main ()
{
    int num;
    int rem, sum = 0;

    printf ("Enter the number = ");
    scanf ("%d", &num);

    // Stronug the number into another variable
    int og = num;

    // Finding the sum of the digit
    while (num > 0)
    {
        rem = num % 10; // Extracting a digit
        sum = sum + rem;  
        num = num / 10;
    }

    // Checking if niven number or not
    if (og % sum == 0)
        printf ("Yes, %d is a Niven Number", og);

    else
        printf ("No, %d is not a Niven Number", og);

    return 0;
}