#include <stdio.h>
int myfun(int a, int b)
{ // if you don't initializ auto in that condition variable automatically initializ  with an auto is called Auto storage class.
     auto int sum;
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
//int sum;   // External storage or global value
    // extern  int sum;
// extern int sum = 356;