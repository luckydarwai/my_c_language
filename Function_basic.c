#include<stdio.h>
int sum(int a,int b)
{                                          //With argument and with return type 
    return a+b ;              
}
int main()
{   int a,b,c;
   printf("Enter the values for sum");
   scanf("%d%d",&a,&b);
  /*  a=500;
    b=500; */
    c= sum(a,b);
    printf("The sum is %d \n",c);
    return 0;

}