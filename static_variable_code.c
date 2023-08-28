#include<stdio.h>
// int res(){
//     return 42*2;
// }
 int b=34; // global variable  
int fun1(int b1){

    static  int myvar =24;
    printf("The value of my var is %d\n",myvar);
    myvar++;
    printf("the value of b inside fun1 is  %d\n",b);
    printf("the address of b inside fun1 is %d\n",&b);
 return b1+myvar;
}
int main()
{     int b=344; // local variable 
      int a1;
        int val=fun1(a1);
    return 0;
}