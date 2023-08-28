#include<stdio.h>
void changevalue(int *x);
int main()
{
    int a=25,b=25;
    printf("The value of a is %d\n",a);
    changevalue(&a);
    printf("After changing value of a is %d\n ",a);
         return 0;
}
void changevalue(int *x)
{
    *x=50;       // with the help of dereference we can change actual variable value
}