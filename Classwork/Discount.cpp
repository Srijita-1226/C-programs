/* Write a c program to find the net payable amount after applying a discount. If the purchase amount 
is >= 10,000, the customer will gwt a discount of 10%, otherwise they will get a discount of 5% */

#include <stdio.h>
main()
{
	float purchase, amt, dis;
	printf ("Enter the purchase amount = ");
	scanf ("%f", &purchase);
	
	if (purchase >= 10000)
	{
		dis = purchase*(0.01);
		amt = purchase-dis;
	}
	else
	{
		dis = purchase*(0.05);
		amt = purchase-dis;
	}
	printf (" Net payable amount by the customer = Rs. %.2f ", amt);
	return 0;
}

