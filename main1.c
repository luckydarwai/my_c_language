#include<stdio.h>
static int a=5;
int getsum(int a,int b){
//    int sum;
   extern int sum;
//    sum= a+b;
   return sum;
}
extern int sum=230;
int main(int argc, char const *argv[])
{
    a+=1;
    printf("%d\n",a);
    int sum= getsum(10,10);
    printf("%d",sum);
    return 0;
}
