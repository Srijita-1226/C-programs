/* Write a c program to reverse the digits of a whole number.  */

#include <stdio.h>
#include <conio.h>

int main()
{
	 int num, rem, reverse;
	 printf ("Enter the number to be reversed = ");
	 scanf ("%d", &num);
	 
	 while (num != 0)
	 {
	 	rem = num % 10;
	 	reverse = reverse * 10 + rem;
	 	num = num / 10;
	 }
	 
	 printf("The reversed number : %d", reverse );
	 return 0;
}
