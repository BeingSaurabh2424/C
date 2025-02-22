// Jump statements : continue
// used only in loops

#include<stdio.h>

int main()
{
    for(int i = 1; i<=10; i++)
    {
        if(i % 2 == 0)
            continue;

        printf("i = %d\n",i); // 1 3 5 7 9
    }
    return 0;
}