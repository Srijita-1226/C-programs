// program to calculate simple interest

#include <stdio.h>
int main()
{
	int prin, rate, time, SI;
	printf("Enter the value for principle, rate & time:");
	scanf("%d %d %d", &prin, &rate, &time);
	
	SI =(prin*rate*time)/100;
	
	printf("Simple Interest = %d", SI);
	return 0;
}
