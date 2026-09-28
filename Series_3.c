/* Write a c program to display the following series : 0,1,1,2.... n terms
 (using while loop). */
 
// Here the series follows the pattern - 0+0 = 0+1 =1+1 =2+2 =4+3 =7... n.
// FIBONACCI SERIES

#include <stdio.h>
int main()
{
	int n, a = 0, b = 1, i = 1, c;
	printf ("Enter the number of term = ");
	scanf ("%d", &n);
	
	printf("Fibonacci series :-\t ");
	while (i<= n)
	{
		printf ("%d\t", a);
		c = a+b;
		a = b;
		b = c;
		i++;
	}
	
	return 0;
}
