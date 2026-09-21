/* Write a C program to print even numbers upto 10 using while loop. */

#include <stdio.h>
int main ()
{
	int i = 0;
	printf ("Even numbers from 1 to 10 -> \n");
	
	while (i<= 10)
	{
		// checking for even number
		if (i % 2 == 0)
			printf ("%d \n ",i);
		i++;
	}
	return 0;
}
