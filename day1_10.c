// for loop 


#include<stdio.h>

int main()
{
    int num = 5;
   // int i;
   
    for(int i = 1; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i , num * i);
    }
//_________________________________________________________
// program to reverse a number
   
    int num1, reverse = 0;
    printf("enter the value for num1 :");
    scanf("%d",&num1); // 123

    int orginal = num1; // 123

    for( ; num1 > 0; num1 /= 10) // 1
    {
        int digit = num1 % 10; // 1
        reverse = reverse * 10 + digit; // 321
    }

    printf("Reverse number of %d is %d !",orginal,reverse);

/*
num1 /= 10
num1 = num1 / 10

*/
    return 0;
}


/*
for(step1 ; step2; step 4)
{
    step 3
}
step1 is executed only once
step 2, 3 and 4 are executed repeatedly till the condition is true 

*/