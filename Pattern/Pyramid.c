/* Write a c program to print the followintg pattern :-       *
                                                            * * *
                                                          * * * * *
                                                          upto n lines   */

#include <stdio.h>

int main()
{
    int i, j, n;
    
    printf ("Enter the number of lines :");
    scanf ("%d", &n);

    printf ("\nThe pattern is as follow :\n\n");

    // This loop controls the number of lines.
    for (i = 1; i <= n; i++)
    {
        // This loop controls the spaces before the star.
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for(j=1; j <= 2*i-1; j++) 
        // Here j <= 2*i-1 prints odd number of stars
        {
            printf ("* ");
        }

        printf("\n");
    }

    return 0;
}