// typedef < previous_name >  < alis_name >
#include<stdio.h>
#include<string.h>
 typedef struct student
{
    int id; 
    char name[20];
    float marks;
}std;  

int main()
{
    std s1,s2,s3;
   s1.id=23;
   s1.marks=99;
   strcpy(s1.name,"lucky"); 
   s2.id=20;
   s2.marks=98;
   strcpy(s2.name,"prahlad"); 
   s3.id=10;
   s3.marks=100;
   strcpy(s3.name,"Ravindra"); 
   printf("The id of student is == %d\n",s1.id);
   printf("The marks of student is == %f\n",s1.marks);
   printf("The name of student is == %s\n",s1.name);
   printf("The id of student is == %d\n",s2.id);
   printf("The marks of student is == %f\n",s2.marks);
   printf("The name of student is == %s\n",s2.name);
   printf("The id of student is == %d\n",s3.id);
   printf("The marks of student is == %f\n",s3.marks);
   printf("The name of student is == %s\n",s3.name);
   
        
    return 0;
}
