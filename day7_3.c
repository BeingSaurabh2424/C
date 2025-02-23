// dynamic memory allocation : malloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num; // compile time memory
   int *ptr = (int*)malloc(sizeof(int)); // allocates the memory at runtime in the heap section
   *ptr = 25;

   printf("value = %d\n",*ptr);

  int *ptr1 =(int*) malloc(sizeof(int)*3);

  ptr1[0] = 10;
  ptr1[1] = 20;
  ptr1[2] = 30;

  for(int i=0;i<3;i++)
  {
    printf("%4d",ptr1[i]);
  }

  free(ptr); // to avoid memory wastage
  ptr = NULL; // to avoid dangling pointer

  free(ptr1);
  ptr1 = NULL;

    return 0;
}

/*
the default return type of malloc is void*
default value of malloc is grabage

*/