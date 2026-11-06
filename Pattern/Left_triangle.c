/* Wrtite a c program to print the following series :-           *
                                                               * *
                                                             * * *
                                                           * * * *
                                                         * * * * *     upto nth lines. */

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf ("Enter the number of lines :");
    scanf ("%d", &n);

    printf ("\nThe pattern is as follow :\n\n");

    // This loop controls the number of lines.
    for (i=1; i<=n; i++)     //Denotes row
    {    
        //This loop prints spaces before the stars.
        for (k=1; k<= n-i; k++)  //Denotes coloumn
        {
            printf("  ");   // Print leading spaces
        }

        
        for (j=1; j<=i; j++)  //Denotes coloumn
        {
            printf ("* ");  //Prints the star
        }

        printf("\n");  //Moves the cursor to the next line after printing the stars
    }

    return 0;
}
