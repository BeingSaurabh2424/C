// auto, register, global variables variables

#include<stdio.h>

int g_num; // global variable
int num1; 
void fun();
int main()
{
    int num1 = 10; // local / auto variable
    int num2; // garbage

    printf("num1 = %d\n",num1); // local variable is given the preference
    
    register int r_num;  // CPU registers

    fun(); 
    printf("g_num is main() = %d\n",g_num); // 2
    return 0;
}

void fun()
{
   // printf("num1 = %d\n",num1); num1 is not accessible
   printf("g_num is fun() = %d\n",g_num); // 0
   g_num = g_num+2;
}
/*
auto / local variable :
default value : garbage 
scope / Accessibility : block
life : block
storage : stack section

_______________________________________
Register variables :
default value : garbage
scope : block
life : block
storage : CPU registers(if request is accepted)/ else
they are stored on the stack section
___________________________________________
global variables :
default value : 0
scope : program
life : program
storage : data section

*/