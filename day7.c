//Write multiplication table of any number


#include<stdio.h>
int main()
{
    int num;
    printf("Enter number you want multiplication table of\n");
    scanf("%d", &num);
    
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num,i,num*i);
    }
    
}