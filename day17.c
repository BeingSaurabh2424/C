// relational Ops : < , <=, > , >= , !=, ==
// return 0(false) or 1(true)

#include<stdio.h>

int main()
{
    int num1 = 65, num2 = 10;
    char ch1 = 'A', ch2 = 'a';

    printf("num1 > num2 = %d\n",num1 > num2);
    printf("%d < %d = %d\n", num1, num2, num1 < num2);
    // 25 < 10 = 0

    printf(" num1 >= num2 = %d\n",num1 >= num2);
    printf(" num1 <= num2 = %d\n",num1 <= num2);
    printf(" num1 == num2 = %d\n",num1 == num2);

    printf(" num1 != num2 = %d\n",num1 != num2);
    printf("%d",num1 == ch1);
    return 0;
}