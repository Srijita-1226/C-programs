/*Write a c program to print the following series :-  1/1 + 1/2 + 1/3 + 1/4 +....+ 1/n. 
  Here the series goes as S = 1/n.    */

#include <stdio.h>

int main()
{
    int n;
    float sum = 0;

    printf ("Enter the nth term : ");
    scanf("%d",&n);

    printf ("THE SERIES :- \t");

    for (int i=1; i<=n; i++)
    {
        printf ("1 / %d \t", i);  //prints the series

        sum = sum + (1.0/i);   //stores the sum
        // Here we use 1.0 because sum is a float variable        
    }

    printf ("\nThe sum of the series = %.2f", sum);

    return 0;
}