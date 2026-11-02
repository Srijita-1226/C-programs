/* Write a c program to calculate the sum of the following series : 2+5+8+11+14+.... n terms
 (using while loop). */
 
 // Here the series preceeds with a difference of 3. 2+3 = 5+3 = 8+3 = 11...= n.

#include <stdio.h>
int main()
{
	int n, sum = 0, i =2;
	printf ("Enter the number = ");
	scanf ("%d", &n);
	
	while (i<= n)
	{
		sum = sum+i;
		i = i+3;
	}
	printf("Sum of the following series : %d ", sum);
	return 0;
}
