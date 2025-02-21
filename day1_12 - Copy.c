// do while loop : exit controlled loop
// loop block is executed atleast once if the condition is false
#include<stdio.h>

int main()
{
    int num = 3;

    do{
        printf("num = %d\n",num); // 3
        num++; // 4
    }while(num > 5); // false
    return 0;
}
/*
num = 3;
while(num > 5)
{
    printf();
}

*/