/* Write a c program to print the following series :-  1! + 2! + 3! + .... + n!. */

#include <stdio.h>

int main()
{
    int num;
    int fact = 1, sum = 0;

    printf("Enter the nth term = ");
    scanf("%d", &num);

    printf("The series is as follow :\n");

    for (int i = 1; i <= num; i++)
    {
        printf("%d!\t", i); // prints the series

        fact = fact * i;       // calculates the factorial of a number
        
        sum = sum + fact; // stores the sum of the factorials
    }

    printf("\nThe sum of the series = %d", sum);

    return 0;
}