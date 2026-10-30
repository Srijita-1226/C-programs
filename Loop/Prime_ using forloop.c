/* Write a c program to check wheather a number is prime number (a number divisible by 1 and itself) or
not using for loop. */

#include <stdio.h>

int main()
{
	int num, i, c=0;
	printf ("Enter the number = ");
	scanf ("%d", &num);
	
	for (i=1; i<=num; i++)
	{
		if (num % i ==0)
			c=c+1;
	}
	
	if (c==2)
		printf ("Yes %d is a prime number. ",num);
	else
		printf ("No %d is not a prime number. ",num);
		
	return 0;
}
