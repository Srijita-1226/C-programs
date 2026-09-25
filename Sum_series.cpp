/* Write a c program to find the sum of the following series :- 1!+3!+5!...... up to n numbers.
  1! =1
  3! = 3*2*1 = 6
  5! = 5*4*3*2*1 = 120 */

#include <stdio.h>
int main ()
{
	int n, i=1, c=1, a=1;
	long int fact, sum = 0;
	printf ("Enter the value = ");
	scanf ("%d", &n);
	printf ("The sum of the series = \n");
	
	while (c<=n)  // outer...if true
	{
		i = 1 ;
		fact = 1;
		while (i<=a)  // inner
		{
			fact = fact*i;
			i++;
		}
		sum = sum+fact;
		c++;
		a = a+2;
	}
	printf ("Sum of the series = %d", sum);
	return 0;
}              
