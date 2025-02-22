// Functions : with parameters, with return type

#include<stdio.h>

int addition(int n1, int n2); // function declaration

int main()
{
    int num1, num2;
    printf("Enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2); // 25,20
    int ans = addition(num1,num2); // function call : actual parameters (25 20)
    // int ans = 45

    printf("ans = %d\n",ans);
    
    ans = addition(500,760);
    printf("ans = %d\n",ans);

    ans = addition(1234,6789);
    printf("ans = %d\n",ans); 

    return 0;
}

// Function definition (formal parameters)
int addition(int n1, int n2)// 25  20
{
    int result = n1 + n2; // 45
    return result; // return 45
}



/*

return_type  function_name(input parameters)
{
    -----
    -----
    ----
}



*/