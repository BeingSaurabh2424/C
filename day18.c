// Logical Ops : && || !
/*
return either 0(false) or 1(true)

&& : returns true(1) if both the operands are true.
if 1st operand of '&&' is false, it does not check the 2nd operand,
it returns false.

|| : return true if any one of the operans is true.
if 1st the operand of || is true, it does not check the 2nd operand.
it returns true.

! : returns true for false and vice versa.

*/

#include<stdio.h>

int main()
{
    int num1, num2 , num3;

    printf("enter the values for num1, num2 and num3 :");
    scanf("%d%d%d",&num1,&num2,&num3); // 25,30,10

    int result = (num1 > num2)  && (num1 > num3);
    //                0  &&  (not checked)
    // result = 0
    printf("Result for && = %d\n",result); // 0

    result = (num2 > num1 ) || (num1 > num3);
    //         30 > 25 (true) || (not checked)
    // result = 1
    printf("Result for || = %d\n",result); // 1
    
    result = !(num1 > num2);
    // result = !0
    // result = 1
    printf("Result for ! = %d\n",result); // 1
    
    return 0;
}