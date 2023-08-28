#include<stdio.h>
// call by value 
 int add(int x,int y)
{
     int sum;
     //sum=x+y;
     return (x+y);
     //return sum;
}

int main()
{
        int a=25,b=50;
        printf("now value of a=%d and b=%d\n",a,b);
        add(a,b);
        printf("now value of sum is =%d ",add(a,b));

    return 0;
}