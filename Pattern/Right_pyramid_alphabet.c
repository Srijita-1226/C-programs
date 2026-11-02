/* Wrtite a c program to print the following series :-  A       
                                                        A B 
                                                        A B C 
                                                        A B C D
                                                        A B C D E
                                                        upto nth lines. */

#include <stdio.h>

int main()
{
    int n, i, j;

    printf ("Enter the number of lines :");
    scanf ("%d", &n);

    printf ("\nThe pattern is as follow :\n\n");

    //controls the number of lines
    for (i = 1; i <= n; i++)
    {
        //prints the alphabets in each line
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
            
            /* j - 1 makes the first alphabet A, the second B, the third C, and so on. 
              For example, when j = 3: 'A' + 3 - 1 gives C.*/
        }

        printf("\n");
    }

    return 0;

}