#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
void greet_hi_execute(int (*ptr)(int, int))
{
    printf("HEllo user\n");
    printf("The sum of 2 and 3 is %d\n", ptr(2, 3));
}
void greet_gm_execute(int (*ptr)(int, int)){
    printf("Good morning");
    printf("The sum of 5 and 7 is %d\n",ptr(5,7));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
   // greet_hi_execute(ptr);
    greet_gm_execute(ptr);

    return 0;
}