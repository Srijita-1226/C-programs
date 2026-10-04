/* Write a c program to display and find the sum of the following series :- 1 + 11 + 111 + 1111 + ....upto n terms. 
  Here, ecah terms exceeds by a multiple of (10+1), i.e, 1*10+1 = 11, 11*10+1 = 111..... upto n terms. */

#include <stdio.h>
#include <conio.h>

int main ()
{
    int n, i=1, v = 0, sum = 0;
    printf ("Enter the term = ");
    scanf ("%d", &n);

    printf ("THE SERIES :-\t");

    while (i <= n)
    {
        v = v * 10 + 1;
        sum = sum + v;
        printf ("%d \t", v);
        i++;
    }

    printf (" \nThe sum of the above series = %d", sum);
    return 0;  
}