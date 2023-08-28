#include<stdio.h>
int func1(){
    static int a1=5;
    // int a1=5;
    a1++;
    return a1;
}
int main()
{
        int a;
        a=func1();
        printf(" value is %d\n",a);
        a=func1();
        printf(" value is %d\n",a);


    return 0;
}