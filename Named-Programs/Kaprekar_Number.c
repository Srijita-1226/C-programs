/* Write a c program to check whether a number is a KAPREKAR NUMBER or not. 
   Logic :- A Kaprekar Number is a number whose square can be split into two parts that add up to the original 
   number. 
   For ex, (45)^2 = 2025,  20 + 25 = 45. */

#include <stdio.h>
#include <math.h>

int main ()
{
    int num;
    int div, p, first_half, second_half, sum, c = 0;

    printf ("Emter the number = ");
    scanf ("%d", &num);

    //Storing the number into another variables
    int num1 = num;
    int og = num;

    // Finding the number of digits
    while (num1 > 0)
    {
        c = c+1;  // Stores the number of digit
        num1 = num1 / 10;
    }

    // checking for even number of digits, if not then terminate
    if ( c % 2 != 0)
    {
        printf ("Sorry, inavlid output ");
        return 0;
    }

    div = c / 2;  //dividing the number of digits into two parts
    p = pow(10,div-1);
    
    // Extracting the digits
    first_half = og / p;  
    second_half = og % p;  

    sum = first_half + second_half;   //adding the two halves

    //checking whether a kaprekar number or not
    if (num == sum)
    {
        printf ("Yes %d is a Kaprekar Number. ",num);
    }
    else
    {
        printf ("No %d is not a Kaprekar Number. ",num);
    } 

    return 0; 

}