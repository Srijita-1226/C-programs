/* Write a c program to check wheather a number is prime number (a number divisible by 1 and itself) or
not using while loop. */

#include <stdio.h>

int main()
{
	int num, c=0, i=1;
	printf ("Enter the number = ");
	scanf ("%d", &num);
	
	while (i<=num)
	{
		if (num % i ==0)
		{
			c=c+1;
		}
		i++;
	}
	
	if (c==2)
		printf ("Yes %d is a prime number. ",num);
	else
		printf ("No %d is not a prime number. ",num);
		
	return 0;
}
