#include<stdio.h>
#include<string.h>
struct student
{
    int id; 
    char name[20];
    float marks;
}lucky,jay,ravi;  // global variables
// struct student lucky , jay , shubham;    // here we declearing global variable
void print()
{
    printf("%s",lucky.name);                           // function decleartion 
}

int main()
{
   // struct student lucky, jay ,ravi ;
   lucky.id=23;
   lucky.marks=99;
   strcpy(lucky.name,"lucky"); 
   jay.id=20;
   jay.marks=98;
   strcpy(jay.name,"prahlad"); 
   ravi.id=10;
   ravi.marks=100;
   strcpy(ravi.name,"Ravindra"); 
   printf("The id of student is == %d\n",lucky.id);
   printf("The marks of student is == %f\n",lucky.marks);
   printf("The name of student is == %s\n",lucky.name);
   printf("The id of student is == %d\n",jay.id);
   printf("The marks of student is == %f\n",jay.marks);
   printf("The name of student is == %s\n",jay.name);
   printf("The id of student is == %d\n",ravi.id);
   printf("The marks of student is == %f\n",ravi.marks);
   printf("The name of student is == %s\n",ravi.name);
   print();            // function calling 
        
    return 0;
}
