// Nested For loop
// Matrix printing

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the matrix table :");
    scanf("%d",&n); // 3

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("%4d",i * j); // 1  2  3
        }
        printf("\n");
    }
    return 0;
}

/*

1 2 3
2 4 6
3 6 9
*/