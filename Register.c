#include <stdio.h>
int myfun(int a, int b)
{
    register int sum; // Register variable request the compiler to the store the variable in the cpu register instead of storing in the memory to habr faster access.
     sum = a + b;
    return sum;
}
int main()
{
     int sum;
     sum=myfun(10,5);
printf("The sum  is %d ", sum);

return 0;
}
