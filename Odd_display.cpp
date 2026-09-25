/* Write a c program to display odd numbers from 1 to n. */

#include <stdio.h>
int main ()
{
	int n, i=1;
	printf ("Enter the value = ");
	scanf ("%d", &n);
	printf ("The odd numbers between 1 & %d = \n", n);
	
	while (i<=n)
	{
		printf ("%d \n ",i);
		i = i+2;
	}
	return 0;
}
