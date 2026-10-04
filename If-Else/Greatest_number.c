// Write a c program to find greatest among three inputed numbers.  

#include <stdio.h>
int main ()
{
	int x, y, z, r;
	printf ("Enter all the three number = ");
	scanf (" %d %d %d", &x, &y, &z);
	
	if((x>y) && (x>z))
		r = x;
	else if ((y>x) && (y>z))
		r = y;
	else
		r = z;
	
	printf ("Greatest number = %d ",r);		
	return 0;
}
