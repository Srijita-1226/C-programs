/* Write a c program to calculate the wage of a worker according to the following criteria :
			HOURS    						   	WAGE
		1st 8 hrs						  	Rs. 50 / hr
		Next 4 hrs 							Rs. 75 / hr
		Next 2 hrs							Rs. 100 / hr      */
		
#include <stdio.h>
int main ()
{
	int hr, wage;
	printf ("Enter your working hours = ");
	scanf ("%d", &hr);
	
	if (hr <= 8)
	{
		wage = 50*hr ;
	}
	else if (hr > 8 && hr <= 12)
	{
		wage = (8*50) + ((hr-8)*75);
	}
	else if (hr > 12 && hr <= 14)
	{
		wage = (8*50) + (4*75) + (hr - 12)*100;
    }
    else
    {
       wage = 0;
	}
		
	printf ("Your wage = Rs. %d ", wage);
	return 0;	
}
