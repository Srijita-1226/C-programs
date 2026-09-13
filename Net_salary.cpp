/* Write a c program to read the basic salary & calculate : HRA = 10% of salary
    														DA = 5% of salary
   If the salary is >= 20,000, then apply 10% of tax else apply 7% of tax. Display the net salary.  */
   
# include <stdio.h>
main() 
{
	float basic, hra, da, tax, net_salary;
	printf ("Enter the basic salary = Rs. ");
	scanf ("%f", &basic);
	
	hra = (0.01)*basic;
	da = (0.05)*basic;
	
	if (basic >= 20000)
	{
		tax = (0.01)*basic;
	}
	else
	{
		tax = (0.07)*basic;
	}
	
	net_salary = ((basic + hra + da) - tax);
	printf ("Net salary = Rs. %.2f", net_salary);
	return 0;
}

