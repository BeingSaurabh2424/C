// static variables

#include<stdio.h>

int g_num = 10; // global variable : throughout the program
static int s_num = 10;  // static variable : in that file

void fun1();
void fun2();
int main()
{
    printf("Fun1 : \n");
    fun1(); // 10
    fun1(); 

    printf("Fun2 :\n");
    fun2();
    fun2();
    return 0;
}

void fun1()
{
    int num1 = 10;
    printf("num1 = %d\n",num1); // 10
    num1 = num1 + 2;// 12
}

void fun2()
{
    static int num1 = 10;
    printf("num1 = %d\n",num1); // 10  12
    num1 = num1 + 2;// 12
}

/*
static variable :
storage : data section
default value : 0
life : program
scope : limited(file or block)



*/