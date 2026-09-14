/* Write a c program to calculate the electricity bill based on the number of units consumed. The charges
are:   0-100 -> Rs.2/unit
	   101-200 -> Rs.3/unit
	   201-300 -> Rs.5/unit
	   above 300 -> Rs.7/unit    */

#include <stdio.h>
main ()
{
	float unit, bill;
	printf ("Enter your consumed units = ");
	scanf ("%f", &unit);
	
	if (unit <= 100)
	{
		bill = (2*100);
	}
	else if (unit > 100 && unit <= 200)
	{
		bill = (2*100) + (unit-100)*3;
	}
	else if (unit > 200 && unit <= 300)
	{
		bill = (100*2) + (100*3) + (unit-200)*5;
    }
    else
    {
        bill = (100*2) + (100*3) + (100*5) + (unit - 300)*7;
	}
		
	printf ("Your electricity bill is Rs. %.2f for this month.", bill);
	return 0;	
}
