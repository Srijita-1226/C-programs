/* Write a c program which reads an integer value and check whether it is positive or not after satisfying the
 integer value is > 0. If it is positive then check whether it is even or odd.     */
 
#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number to de checked : ");
	scanf("%d",&num);
	
	if(num>= 0)
	{
		printf (" %d is a positive number !! \n" , num);
		printf ("*************************** \n");
		if (num % 2 == 0)
			printf (" %d is an even number !", num);
		else
			printf (" %d is an odd number !", num);
	}
	else
		printf ("%d is a negative number !", num);
	
	return 0;
}
