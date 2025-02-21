// if-else if
/* calculator:
Accept 2 numbers from the user and perform the operation
as per the user requirement.
*/

#include<stdio.h>

int main()
{
    char operator;
    printf("Enter the Operator (+ - * /) : ");
    scanf("%c",&operator);

    int num1, num2;
    printf("Enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2);

    if(operator == '+')
    {
        printf("Addition = %d\n", num1 + num2);
    }
    else if(operator == '-')
    {
        printf("Subtraction = %d\n", num1 - num2);
    }
    else if(operator == '*')
    {
        printf("Multiplication = %d\n", num1 * num2);
    }
    else if(operator == '/')
    {
        // nested 
        if(num2 != 0)
            printf("Division = %d\n", num1 / num2);
        else
        {
            printf("Error ! Division by 0 not allowed !\n");
        }
    }
    else
        printf("Invalid Operator !\n");
    return 0;
}