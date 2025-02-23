// char 2-D array

#include<stdio.h>

int main()
{
    char departments[][20] = {"Sales","HR","Marketing","Training"};

    printf("%s\n",departments[2]);

    printf("%c\n",departments[3][4]); //n
    printf("%c\n",*(*(departments+3)+4)); // n

    printf("%c\n",**departments+3); // V
    return 0;   
}