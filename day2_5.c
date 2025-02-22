// functions : with parameters, without return type

#include<stdio.h>


void prime_numbers(int start, int end)// 10 20
{
    int num,i, is_prime;
    for(num = start; num <= end; num++) // range from 10 to 20
    {
        if ( num > 1)
        {
            is_prime = 1; 
            for(i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if(is_prime == 1) // if(1)
            {
                printf("%4d",num); // 11 13
            }
        }
    }
}


int main()
{
    int start, end;

    printf("Enter the start and End to print the prime numbers :");
    scanf("%d%d",&start,&end); // 10  20
    
    printf("The prime numbers in range of %d and %d are :\n", start,end);

    prime_numbers(start,end);
    // function_call(actual parameters)
    // prime_numbers(10,20)
    return 0;
}