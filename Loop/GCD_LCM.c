/* Write a c program find the GCD and LCM of two numbers. 
   GCD = Greatest Common Divisor: The largest number that divides both numbers exactly.
   LCM = Least Common Multiple : The smallest positive number that is a multiple of both numbers. */

// For ex, 12 & 18 - GCD = 6, LCM = 36

#include<stdio.h>

int main()
{
    int num1, num2;
    int gcd, lcm;

    printf ("Enter the both numbers = ");
    scanf ("%d %d", &num1, &num2);
 
    //Storing the two values unto another variable
    int a = num1;
    int b = num2;

    // Finding GCD
    for (int i=1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0) //When i divides both a & b it's their GCD
            gcd = i;
    }

    //Finding LCM
    lcm = (num1*num2) / gcd;  //Formula to get LCM when GCD is already known

    //printing statements
    printf ("\nThe two numbers you entered are = %d & %d\n", num1, num2);
    printf ("GCD = %d\n", gcd);
    printf ("LCM = %d\n", lcm);

    return 0;
}