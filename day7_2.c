// command line arguments

#include<stdio.h>

// char *ptr1[]
int main(int argc,char *argv[], char *env[])
{
    for(int i=0; i<argc; i++) // argc = 5
    {
        printf("%s\n",argv[i]);
    }

printf("\n Envirnoment variables :\n");
    for(int i = 0; i<10; i++)
    {
        printf("%s\n",env[i]);
    }

    return 0;
}

/* 
argc : argument count : 5
argv : arumnet vector

path .\a.exe blue red green yellow
*/

