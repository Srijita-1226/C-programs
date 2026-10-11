/* Write a c program to check whether a number is a tech number or not.

  A Tech Number is a number with an even number of digits that can be divided into two equal halves. If the square of the
  sum of those halves equals the original number, it's a Tech Number.

  For example, 3025 = (30+25)^2 = 55^2 = 3025.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num, n1, a, b, div, sum, val, p, c=0;
    printf ("Enter the number = ");
    scanf ("%d", &num);

    //storing the original value into another variable
    n1 = num;

    // finding number of digits in the number
    while (num > 0)
    {
        num = num / 10;
        c = c + 1;
    }

    // checking for even number orf digits, if not then terminate
    if ( c % 2 != 0)
    {
        printf ("Sorry, inavlid output ");
        exit (0);
    }

    div = c / 2;    
    p = pow(10,div);
    
    a = n1 / p;  //first half
    b = n1 % p;  //second half

    sum = a+b;   //adding the two halves
    val = pow(sum,2);  //squaring them

    //checking whether a tech number or not
    if (n1 == val)
    {
        printf ("Yes %d is a Tech Number. ",n1);
    }
    else
    {
        printf ("No %d is not a Tech Number. ",n1);
    }

    return 0;

}