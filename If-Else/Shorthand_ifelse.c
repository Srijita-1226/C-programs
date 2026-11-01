//Ternary operator

#include <stdio.h>

int main()
{
    int a = 354;
    int b = 647;

    // condition ? expression-if-true : expression-if-false
    // "?" and ":" are called Ternary Operators
    a>b? printf("A is greater !") : printf ("B is greater !");

    return 0;
}