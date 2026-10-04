/* Write a c program to display Fibonacci series upto n terms. 
   Fibonacci series = 0,1,1,2,3,5,8,13..... n terms
   Here, fib (n) = fib (n-1) + fib (n-2), [where n = no. of term] & also first two terms, i.e, 0 & 1 are fixed. */

# include <stdio.h>
# include <conio.h>

int main ()
{
    int num, t1 = 0, t2 = 1, t3, i;
    printf ("Enter the no. of terms = ");
    scanf ("%d", &num);

    printf ("Fibonacci Series :- \n");

    for (i = 1; i <= num; i++)
    {
        printf ("%d \t", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3; 
    }

    return 0;
}
