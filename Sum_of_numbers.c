/* Write a C program to calculate the sum of numbers from 1 to n. */

# include <stdio.h>
int main ()
{
    int n, sum = 0, i=1;
    printf ("Enter the value : ");
    scanf ("%d", &n);

    while (i<=n)
    {
        sum = sum + i;
        i++;         
    }
    printf (" The sum of numbers from 1 to %d  = %d", n, sum );
    return 0;
}