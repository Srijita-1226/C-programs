/* Write a c program to calculate the sum of the following series : 1+2+4+7+11+.... n terms
 (using while loop). */
 
// Here the series preceeds with a difference of 3. 1+1 = 2+2 = 4+3 = 7+5 = 11... = n.

#include <stdio.h>
int main()
{
	int n, sum = 0, i =1, term = 1, d=1;
	printf ("Enter the number of term = ");
	scanf ("%d", &n);
	
	while (i<= n)
	{
		printf ("%d\t", term);
		sum = sum+term;
		term = term + d;
		d++;
		i++;
	}
	printf("Sum of the following series : %d ", sum);
	return 0;
}
