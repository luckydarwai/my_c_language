#include<stdio.h>
#define AGE 18
#undef AGE
int main()
{
    printf("Life is short\n");
    #if AGE
    
        printf("you can vote\n");
    #endif
    printf("you are only one of the best voter of this Country\n");
    return 0;
}