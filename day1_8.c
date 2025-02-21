// switch - case
// calculator

#include<stdio.h>

int main()
{
    int num1, num2;
    int choice;
    // char ch;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division :\n");
    printf("Enter your choice :"); // 3
    scanf("%d",&choice); 
    // scanf("%c",&ch);
    
    printf("enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2);

    switch(choice) // 5
    {
        // case '*' :
        default :
                printf("Invalid Choice !");
                break;
        case 2+1:
                printf("Multiplication = %d\n", num1 * num2);
                break;
        case 1: // case '+' :
                printf("Addition = %d\n", num1 + num2);
                break;
         case 4: // case '/' :
                printf("division = %d\n", num1 / num2);
                break;
        case 2: // case '-' :
                printf("subtraction = %d\n", num1 - num2);
                break;
        
    }


    return 0;
}