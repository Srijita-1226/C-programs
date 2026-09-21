/* Write a c program to print odd numbers upto 10 using while loop. */

#include <stdio.h>
int main ()
{
	int i = 1;
	printf ("Odd numbers from 1 to 10 -> \n");
	
	while (i<= 10)
	{
		printf ("%d \n",i);
		i = i+2;
	}
		
	return 0;
}
