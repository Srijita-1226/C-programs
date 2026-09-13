// program to convert celcius to farenhite and vice versa

#include <stdio.h>
main()
{
	float c, f, cel , far;
	printf("Enter the value of temparature in celcius and farenhite:");
	scanf("%f %f", &c, &f);
	
	cel = (f-32)/1.8;
	far = (c*1.8)+32;
	printf("Temparature in celcius after conversion = %.2f\n", cel);
	printf("Temparature in farenhite after conversion = %.2f\n", far);
	return 0;
}
