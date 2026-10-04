/* Write a c program to display Tribonacci series upto n terms. 
   Tribonacci series = 0,0,1,1,2,4,7,13,24,44..... n terms.
   Here, tri (n) = tri (n-1) + tri (n-2) + tri (n-3), [where n = no. of term] & also first three terms, i.e, 0, 1 & 1 are fixed.
   Fibonacci series -> 1st two terms are added   ;   Tribonacci series -> 1st three terms are added.  */

# include <stdio.h>
# include <conio.h>
int main ()
{
    int num, t1 = 0, t2 = 0, t3 = 1, v, i;
    printf ("Enter the no. of terms = ");
    scanf ("%d", &num);

    printf ("Tribonacci Series :- \n");

    for (i = 1; i <= num; i++)
    {
        printf ("%d \t", t1);
        v = t1 + t2 + t3;
        t1 = t2;
        t2 = t3; 
        t3 = v;
    }

    return 0;
}
