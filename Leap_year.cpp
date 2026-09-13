// Write a c program to check whether a year is a leap year or not.
/* A year is a leap year if : 1. It is divisible by 400, OR
							  2. It is divisible by 4 but not divisible by 100.  */

#include <stdio.h>
int main()
{
    int year;
	printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}
