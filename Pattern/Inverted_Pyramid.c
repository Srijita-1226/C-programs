/* Write a c program to print the following pattern :-  1 2 3 4 5
														1 2 3 4
														1 2 3
														1 2
														1    */
														
#include <stdio.h>

int main()
{
	int i, j;
	
	printf ("The pattern is as follow :\n");
	
	for (i = 5; i; i--)  //Denotes row
	{
		for (j=1; j<=i; j++)  //Denotes coloumn
		{
			printf ("%d ", j); //Prints the number
		}  
		
		printf ("\n"); // Moves the cursor to the next line after printing the number 
	}
	
	return 0;
	
	
}
