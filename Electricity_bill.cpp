/* Write a c program to calculate the electricity bill according to the following criteria :
			UNITS    						   	RATE
		1st 200 units							Free
		Next 100 units 						0.75 / unit
		Next 100 units						1.00 / unit
		Above 400 units						1.25 / unit       */
		
#include <stdio.h>
main ()
{
	float unit, bill;
	printf ("Enter your consumed units = ");
	scanf ("%f", &unit);
	
	if (unit <= 200)
	{
		bill = 0;
	}
	else if (unit > 200 && unit <= 300)
	{
		bill = (unit-200)*0.75;
	}
	else if (unit > 300 && unit <= 400)
	{
		bill = (100 * 0.75) + (unit - 300) * 1.00;
    }
    else
    {
        bill = (100 * 0.75) + (100 * 1.00) + (unit - 400) * 1.25;
	}
		
	printf ("Your electricity bill is Rs. %.2f for this month.", bill);
	return 0;	
}
