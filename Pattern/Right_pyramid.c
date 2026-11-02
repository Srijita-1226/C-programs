/* Write a c program to print the following pattern :- *
														* *
														* * *
														* * * *
														* * * * *    */
														
#include <stdio.h>

int main()
{
	int i, j;
	
	printf ("The pattern is as follow :\n");
	
	for (i = 1; i<=5; i++)  //Denotes row
	{
		for (j=1; j<=i; j++)  //Denotes coloumn
		{
			printf ("*"); //Prints the star
		}  
		
		printf ("\n"); // Moves the cursor to the next line after printing "n" number of stars.
	}
	
	return 0;
	
	
}
