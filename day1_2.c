// Data types : int, char , float, double

#include<stdio.h>

int main()
{
    int num1; // variable declaration
    // garbage value is assigned
    printf("num1(garbage) = %d\n",num1); // garbage value
    num1 = 25; // assignment
    printf("num1 = %d\n",num1); // 25

    char ch = 'A'; // initialization
    printf("ch = %c\n",ch); // A
    printf("ch = %d\n",ch); // 65

    float fnum = 1.2;
    printf("fnum = %.2f\n",fnum); // 1.20

    double dnum = 3.4;
    printf("dnum = %.3lf",dnum); // 3.400
    // lf is a format specifier for double(long float)
    return 0;
}