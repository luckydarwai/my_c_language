// Given two number a and b , add them and substract them to a and b using call by reference 
void res_swap(int *x,int *y);
#include<stdio.h>
int main()
{
        int a=4,b=3;
        printf("The value of a = %d\n and value of b =%d\n",a,b);           // a=7 & b=1;
        res_swap(&a,&b);
        printf("result of a=%d\n and b=%d",a,b);
            return 0;
}
void res_swap(int *x,int *y)
{    
       *x=*x+*y;
        *x=4; 
       *y=*x-*y;
}