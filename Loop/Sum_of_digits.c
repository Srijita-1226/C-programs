/* Write a c program to calculate sum of digits.  */

#include <stdio.h>
#include <conio.h>

int main()
{
	 int num, rem, sum = 0;
	 printf ("Enter the number = ");
	 scanf ("%d", &num);
	 
	 while (num != 0)
	 {
	 	rem = num % 10;
	 	sum = sum + rem;
	 	num = num / 10;
	 }
	 
	 printf("The sum of digits : %d", sum );
	 return 0;
}
