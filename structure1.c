#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Employee e1;
   e1.id=23;
   e1.marks=99;
   strcpy(e1.name,"lucky");
   printf("The id of employee is == %d\n",e1.id);
   printf("The marks of employee is == %f\n",e1.marks);
   printf("The name of employee is == %s\n",e1.name);

        
    return 0;
}