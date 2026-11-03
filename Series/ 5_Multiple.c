/* Write a c program to diaplay and find the sum of the following series : 5,10,15,20.... upto n terms.
   Here, each term increases by 5, i.e, 5+5 = 10, 10+5 = 15, 15+5= 20.... upto n terms. */

#include <stdio.h>
#include <conio.h>

int main ()
{
    int n, i=1, v = 5, sum = 0;
    printf ("Enter the term = ");
    scanf ("%d", &n);

    printf ("THE SERIES :-\t");

    while (i <= n)
    {
        printf ("%d \t", v);
        sum = sum + v;
        v = v + 5;
        i++;
    }

    printf (" \nThe sum of the above series = %d", sum);
    return 0;  
}
