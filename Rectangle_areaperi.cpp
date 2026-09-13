//program to calculate area and perimeter of a rectangle

#include <stdio.h>
int main()
{
	int length, breadth, p , a;
	printf("Enter the value for length and breadth:");
	scanf("%d %d", &length, &breadth);
	
	p = 2*(length+breadth);
	a = length*breadth;
	
	printf("Perimeter = %d\n", p);
	printf("Area = %d\n", a);
	return 0;
}
