/* Write a c program to print the following pattern :   1 2 3 4 5
														                              1 2 3 4
														                                1 2 3
															                                1 2
                              															    1.... nth term */
															    
#include <stdio.h>
int main()
{
	int n, i, j, k;
	
	printf ("Enter the nth term : ");
	scanf ("%d", &n);
	
	printf ("\n The pattern is as follow : \n");
	
	// This loop controls the number of lines.
	for (i=n; i>=1; i--)
	{
		for (k=0; k <= n-i; k++)  //Denotes coloumn
        {
            printf(" ");   // Print leading spaces
        } 

        
        for (j=1; j<=i; j++)  //Denotes coloumn
        {
            printf ("%d",j);  //Prints the number
        }

        printf("\n");  //Moves the cursor to the next line after printing the numbers
    }

    return 0;
}
	
