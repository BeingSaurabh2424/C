// array of structure variable using anonymous structure

#include<stdio.h>
#define SIZE 3

/*
struct employee
{
    int emp_id;
    char name[20];
    double salary;
}
*/

typedef struct
{
    int emp_id;
    char name[20];
    double salary;
}emp; // emp is the another name for the structure

int main()
{

    emp e1; // emp is the name
    // e1 is the variable

    emp e[SIZE];

    printf("Enter the employee details :");

    for(int i =0; i<SIZE; i++)
    {
        printf("employee [%d] :",i+1); // employee 1 , employee 2
        scanf("%d%s%lf",&e[i].emp_id,&e[i].name,&e[i].salary);
    }

    printf("The employee details are :");

    for(int i =0; i<SIZE; i++)
    {
        printf("employee [%d] :",i+1);
        printf("%d  %s  %.2lf\n",e[i].emp_id,e[i].name,e[i].salary);
    }

    return 0;
}