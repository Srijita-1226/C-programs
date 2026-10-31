/* Write a C program to print the sum of the following series :-  1!/2 + 2!/4 + 3!/6 + 4!/8 +.. upto n terms.
   Here, the series contains factorials in the numerator and twice the term number in the denominator.
   S = n!/2n .*/

#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++)
    {
        // Calculate the factorial of i
        fact = fact * i;

        // Calculate the current term and add it to sum
        sum = sum + (float)fact / (2 * i);
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}