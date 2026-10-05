/* Write a c program to count the digits of a whole number.  */

#include <stdio.h>
#include <conio.h>

int main()
{
	 int num, rem, c = 0;
	 printf ("Enter the number = ");
	 scanf ("%d", &num);
	 
	 while (num != 0)
	 {
	 	rem = num % 10;
	 	num = num / 10;
	 	c = c+1;
	 }
	 
	 printf("The number of digits : %d", c );
	 return 0;
}
