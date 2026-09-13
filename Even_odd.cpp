// Write a c program to check whether a number is odd or even

#include <stdio.h>
int main ()
{
	int num;
	printf ("Enter the number = ");
	scanf ("%d", &num);
	
	if (num % 2 == 0)
		printf ("%d is an even number !", num);
		
	else
		printf ("%d is an odd number !", num);
	
	return 0;
}
