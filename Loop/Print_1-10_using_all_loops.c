/* Write a C program to print numbers from 1 to 10 using all three loops (for loop, while loop and do-while loop).*/

#include <stdio.h>

int main()
{
    int i;

    // Using for loop
    printf("Using for loop:\n");

    for (i = 1; i <= 10; i++)
    {
        printf("\t%d ", i);
    }

    // Using while loop
    printf("\n\nUsing while loop:\n");

    i = 1;  
    while (i <= 10)
    {
        printf("\t%d ", i);
        i++;  
    }

    // Using do-while loop
    printf("\n\nUsing do-while loop:\n");
    
    i = 1;  
    do
    {
        printf("\t%d ", i);
        i++;  
    }
    while (i <= 10);

    return 0;
}