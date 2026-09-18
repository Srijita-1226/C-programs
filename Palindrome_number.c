/* Write a c program to check whether a number is a palindrome number or not. 
Logic for palindrome number :-   A number is a Palindrome number if the reverse of the number equals the number.
                                Example :   121   */

#include <stdio.h>
int main ()
{
    int num, og, digit, rev=0;
    printf ("Enter the number = ");
    scanf ("%d", &num);

    // storing the number into another variable
    og = num;

    while (num!=0)
    {
        // storing the very last digit
        digit = num % 10;
        // reversing the digit
        rev = rev*10 + digit;
        num = num /10;
    }

    // checking the number
    if (og == rev)
        printf ("Yes, %d is a Palindrome Number. ", og);
    else
        printf ("No, %d is not a Palindrome Number. ", og);
    return 0;
}
