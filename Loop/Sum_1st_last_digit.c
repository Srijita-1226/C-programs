/* Write a c program to find the sum of first and the last digit of a number. 
   For example, 4523 = 4 + 3 = 7.  */

#include <stdio.h>
#include <math.h>

int main ()
{
    int num, og, n1, n2, sum, c = 0, p =1;

    printf("Enter the number = ");
    scanf("%d", &num);
    
    //storing the number into another variable
    og = num;

    //finding the number of digits
    while (num > 0)
    {
        num = num / 10;
        c = c + 1;
    }

    p = pow(10,c-1);
    n1 = og / p;  //first digit
    n2 = og % 10;  //last digit

    //adding the two digits
    sum = n1 + n2;

    printf ("Sum of first digit and last digit : \t");
    printf (" %d + %d = %d", n1, n2, sum);

    return 0;   
}
