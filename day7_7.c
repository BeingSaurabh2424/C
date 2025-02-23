// structure declaration, initialization,scanning
// user defined data type

#include<stdio.h>
#include<string.h>
struct student
{
     int roll_no;
    char name[20];
    float marks;
};


int main()
{
 struct student s1 = {1,"ABC",100};  

 struct student s2;
 s2.roll_no = 2;
 strcpy(s2.name,"XYZ");
 s2.marks = 200;

 struct student s3;
 printf("Enter the roll no , name and marks :");
 scanf("%d%s%f",&s3.roll_no,&s3.name,&s3.marks);


 printf("S1 : %d  %s  %.2f\n",s1.roll_no,s1.name,s1.marks);
 printf("S2 : %d  %s  %.2f\n",s2.roll_no,s2.name,s2.marks);
 printf("S3 : %d  %s  %.2f\n",s3.roll_no,s3.name,s3.marks);

    return 0;
}