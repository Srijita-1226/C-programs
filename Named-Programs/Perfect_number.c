/* Write a c program to check whether a number is a perfect number or not. */

/* Logic for Perfect Number :- If the sum of all factors of a number except the number itself equals the number, it is called a Perfect
   Number.
   For ex, 28 is a perfect number; 28 = 1,2,4,7,14 (proper divisor)
                                   1 + 2 + 4 + 7 + 14 = 28.   */

#include <stdio.h>
#include <conio.h>

int main ()
{
    int num, og, i, sum =0;
    printf ("Enter the number = ");
    scanf ("%d", &num);

    og = num;

    for (i=1; i<num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == og)
    {
        printf ("Yes ! %d is a Perfect number", sum);
    }

    else
    {
        printf ("No ! %d is not a Perfect number", sum);
    }

    return 0;

}
