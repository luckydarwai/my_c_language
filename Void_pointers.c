#include <stdio.h>
int main()
{
    int a = 33;
    float b = 23.5;
    void *ptr;

    ptr = &a;
    printf("The value of a is = %d\n", *((int *)ptr)); // we can access void pointers value with the help of typecasting.
    ptr = &b;
    printf("The value of b is = %f\n", *((float *)ptr)); // Without typecasted we cannot acces void pointers value.
    return 0;
}