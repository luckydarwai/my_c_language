#include <stdio.h>
int main()
{
    int inttype;
    char chartype;
    float floattype;
    double doubletype;

    printf("size of int: %d bytes\n", sizeof(inttype));
    printf("size of char: %c byte\n", sizeof(chartype));
    printf("size of float: %f bytes\n", sizeof(floattype));
    printf("size of double: %ld bytes\n", sizeof(doubletype));

    return 0;
}
