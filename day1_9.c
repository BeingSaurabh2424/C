// Loops : 
/*
Entry Controlled Loops : The condition is checked before entering the loop
1) while loop
2) for loop

Exit controlled Loop : The condition is checked at the exit of the loop.
1) do - while
_____________________________________

steps:
1. Loop variable initialization
2. Condition check
3. Execute the Loop
4. Loop variable Modification

*/
#include<stdio.h>

int main()
{
    int num = 5;
    int i = 1; // Loop variable initialization

    while(i <= 10) // condition
    {
        printf("%d * %d = %d\n",num,i,num*i);// execution
        i++; // loop variable modification
        // i = i + 1
    }

    return 0;
}
/*
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15


*/