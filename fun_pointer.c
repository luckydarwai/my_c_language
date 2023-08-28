#include<stdio.h>
int sum(int a,int b){
    // int sum=a+b;
    int c=0;
   return a+b+c;
}                
int main()
{
    printf("The sum of 1 and 5 is %d\n",sum(1,5)); // testing the function
    int(*fptr)(int,int); // here, we declared a function pointer  
    fptr=&sum;
    int d=(*fptr)(4,6); // Dereferencin`g a function pointer
    printf("The value of d is %d\n",d);
               
    return 0;
}