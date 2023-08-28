#include<stdio.h>
int main()
{
       // int *a,b;
        typedef int* intpointer;
        intpointer a,b;
        int c=89;
       a = &c;
       b = &c;
        printf("value of a = %d\n",a);
        printf("value of b = %d",b);

    return 0;
}