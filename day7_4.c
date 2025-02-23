// calloc , realloc

#include<stdio.h>
#include<stdlib.h>
// malloc and calloc are used to allocate the memory
// realloc is used to resize the memory
int main()
{
    int arr[5]; // compile time
     int *ptr =(int *) calloc(3,sizeof(int)); // 12
     //                malloc(sizeof(int)*3) // 12
    
    // default value in the memory created by calloc is 0
    ptr[0] = 11;
    ptr[1] = 22;
    ptr[2] = 33;
    for(int i =0; i<3; i++)
    {
        printf("%4d",ptr[i]);
    }

    printf("\n After Realloc :\n");
   ptr =  realloc(ptr,sizeof(int)*5);
   ptr[3] = 44;
   ptr[4] = 55;

   for(int i =0; i<5; i++)
   {
    printf("%4d",ptr[i]);// 11 22 33 44 55
   }

   free(ptr);
   ptr = NULL;
    return 0;
}