#include <stdio.h>

#define YEARS_OLD 12

 #undef YEARS_OLD

int main()
{
 #ifdef YEARS_OLD
    printf("Shubham is over %d years old.\n", YEARS_OLD);
 #endif

    printf("Shubham is a great child\n");

    return 0;
}