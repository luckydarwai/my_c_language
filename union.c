// uniun is just like a structure 
// in uniun we can use only one type of variable which variable take more bytes only it can access.
// union 
 //  [.] here operator is access member operator 
 // typedef < previous_name >  < alis_name >
#include<stdio.h>
#include<string.h>
 typedef union student
{
    int id; 
    char name[20];
    float marks;
}std;  

int main()
{
    std s1,s2,s3;
   s1.id=23;
   strcpy(s1.name,"lucky"); 
   s1.marks=99;
   s2.id=20;
   strcpy(s2.name,"prahlad"); 
   s2.marks=98;
   s3.id=10;
   strcpy(s3.name,"Ravindra"); 
   s3.marks=100;
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
