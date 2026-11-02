/* Write a c program to print a star pattern in square format. */

#include <stdio.h>

int main()
{
	int num, i, j;
	
	printf ("Enter the number = ");
	scanf ("%d", &num);
	
	for (i = 1; i<=num; i++)  //Denotes row
	{
		for (j=1; j<=num; j++)  //Denotes coloumn
		{
			printf ("*"); //Prints the star
		}  
		
		printf ("\n"); // Moves the cursor to the next line after printing "n" number of stars.
	}
	
	return 0;
	
	
}
