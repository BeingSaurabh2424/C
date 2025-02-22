// jump statements : 
// break : it is used in switch and loops

#include<stdio.h>

int main()
{
    int count = 0;

    while(1) // infinite loop
    {
        printf("%4d",count); // 0 2 4 6 8
         count = count+2; // 2 4 6 8 10
        if(count % 10 == 0)
        {
            printf("\n Count = %d, Breaking the loop !\n",count);
            break;
        }
       
    }
    return 0;
}