// Operators : Arithmetic : + - * / %
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2);// & is an address of operator

    int result;
    result = num1 + num2; // 50 + 20
    printf("result of Addition = %d\n",result); // 70
    printf("subtraction = %d\n",num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);
    printf("Division = %d\n", num1 / num2); // quotient
    printf("Mod = %d\n", num1 % num2); // remainder

    return 0;
}