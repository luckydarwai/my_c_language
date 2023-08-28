#include<stdio.h>
int b=34; //global value
int ret(int a){
    return a*2;
}
int fun1(int b1)
{
    static int myvar=100;
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    return b1+myvar;
}
int main()
 { 
 //        int a=2;
//          int val=ret(a);
//         printf("The value is %d ",val);
         int b=222;
        int val=fun1(b);
         val=fun1(b);
         val=fun1(b);
         val=fun1(b);
         val=fun1(b);
         val=fun1(b);
         val=fun1(b);

    return 0;
}