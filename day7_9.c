// passing structure to the function
// copying 1 structure variable into another

#include<stdio.h>

typedef struct employee
{
    int emp_id;
    char name[20];
    double salary;
}emp;

void accept_data(emp e1);
void print_data(emp e1);
void accept_data_by_address(emp *ptr);
int main()
{
    emp e1;
   // accept_data(e1);
    accept_data_by_address(&e1);
    print_data(e1);

    emp e2;
    e2 = e1;

    printf("\n E2 variable :\n");
    print_data(e2);
    return 0;
}

// pass by value
void accept_data(emp e1)
{
    printf("Enter the employee details :");
    scanf("%d%s%lf",&e1.emp_id,&e1.name,&e1.salary);
}


void accept_data_by_address(emp *ptr)
{
    printf("Enter the employee details :");
    scanf("%d%s%lf",&ptr->emp_id,&ptr->name,&ptr->salary);
}


void print_data(emp e1)
{
    printf("Employee Details :\n");
    printf("%d  %s  %lf\n",e1.emp_id,e1.name,e1.salary);
}