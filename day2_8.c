// recursion
// factorial : 
#include<stdio.h>

int my_fact(int num);
int main()
{
    int num = 5;

    int result = my_fact(num); // 5

    printf("Result = %d\n",result); // 120 
    return 0;
}

int my_fact(int num)
{
    if(num == 0)
        return 1;
    
return num * my_fact(num - 1);
}