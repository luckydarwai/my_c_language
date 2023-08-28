#include<stdio.h>
int main()
{
        int a=1234;
        int *ptr; // now, in current line this is a wild pointer
      //  *ptr=23; // This is not a good thing to do ( don't try this )
        ptr=&a; // ptr is no longer a wild pointer;
        printf("The value of a is = %d\n",*ptr);
    return 0;
}