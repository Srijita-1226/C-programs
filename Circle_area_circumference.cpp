// program to calculate area and circumference to a circle

#include <stdio.h>
main()
{
	float r, cir, area;
	printf("Enter the value for radius :");
	scanf("%f", &r);
	
	cir = (2*3.14*r);
	area = 3.14*(r*r);
	
	printf("Circumference = %.2f\n", cir);
	printf("Area = %.2f\n", area);
	return 0;
}
