/* Wrtite a c program to print the following pattern :-    1 1 1 1
                                                           2 2 2 2
                                                           3 3 3 3
                                                           4 4 4 4    upto n lines.  */

#include <stdio.h>

int main()
{
    int n, i, j;

    printf ("Enter the number of lines :");
    scanf ("%d", &n);

    printf ("\nThe pattern is as follow :\n\n");

    // This loop controls the number of lines.

    for(i=1; i<=n; i++)  //Denotes rows
    {
        for (j=1; j<=n; j++)  //Denotes coloumn
        {
            printf ("%d ",i);
        }

        printf("\n");  //Moves the cursor to the next line after printing the numbers
    }

    return 0;
}