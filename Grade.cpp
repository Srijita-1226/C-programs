/* Write a c program to take inputs of marks of a student and display the grades according to the 
following conditions-
The conditions are :- 1. if marks >= 90, grade is 'A'
					  2. if marks >= 75, grade is 'B'
					  3. if marks >= 50, grade is 'C'  */
					  
#include <stdio.h>
int main()
{
    int marks;
	printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade: A");
    }
    else if (marks >= 75)
    {
        printf("Grade: B");
    }
    else if (marks >= 50)
    {
        printf("Grade: C");
    }
    else
    {
        printf("Grade: Fail");
    }

    return 0;
}
				  
