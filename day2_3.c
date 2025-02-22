// Jump Statements : goto

#include<stdio.h>

int main()
{
    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=4; j++)
        {
            printf("i = %d  j = %d\n", i, j); 
            // 1  1
            // 1  2
            // 1  3
            
            if(j == 3)
                goto END; // END is a label
        }
        
    }

    END :
        printf("Exited from the Loop !\n");

    return 0;
}