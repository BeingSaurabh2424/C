// preprocessor directives
// variables
// functions


#include<stdio.h>
#define Row 3
#define Col 3
// find and replace
//#define SQR(x) x*x
#define SQR(x) (x)*(x)

int main()
{
   // int row =3,col = 2;
   // int arr[3][2];
    int arr[Row][Col];

    printf("Square = %d\n",SQR(5+2));
    //printf("Square = %d\n",5+2*5+2);

    for(int i =0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            // scan
        }
    }


    for(int i =0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            // print
        }
    }


    return 0;
}