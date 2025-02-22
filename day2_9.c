// pointers
// changing state(value) of variable using pointer variable

#include<stdio.h>

int main()
{
    int num1 = 50;
    int *ptr = &num1;

    printf("num1 = %d\n",num1); // 50
    printf("address of num1 = %d\n",&num1); // 100
    printf("ptr = %d\n",ptr); // 100
    printf("Address of ptr = %d\n",&ptr); // 500 

    *ptr = 75;
    // value at ptr = 75
    // value at 100 = 75

    printf("After Changes :\n");
    printf("num1 = %d\n",num1); // 75
    printf("address of num1 = %d\n",&num1); // 100
    printf("ptr = %d\n",ptr); // 100
    printf("Address of ptr = %d\n",&ptr); // 500 

    return 0;
}