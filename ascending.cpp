// program to display numbers in their ascending order

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the three numbers :");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a <= b && a <= c)
	{
        if (b <= c)
            printf("Ascending order: %d %d %d", a, b, c);
        else
            printf("Ascending order: %d %d %d", a, c, b);
    }
    else if (b <= a && b <= c) 
	{
        if (a <= c)
            printf("Ascending order: %d %d %d", b, a, c);
        else
            printf("Ascending order: %d %d %d", b, c, a);
    }
    else 
	{
        if (a <= b)
            printf("Ascending order: %d %d %d", c, a, b);
        else
            printf("Ascending order: %d %d %d", c, b, a);
    }

    return 0;
}

