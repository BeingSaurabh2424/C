// conditional Statements :
// if-else :  check if the character is vowel or consonant.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);

    if(ch == 'A'|| ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I'||
    ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        printf("%c is a Vowel !",ch);
    }
    else
        printf("%c is a consonant !",ch);
   
    return 0;
}