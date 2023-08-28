#include<stdio.h>
void printstar(int n)                            // with argument and without return value
{
    for(int i=0;i<n;i++)
    {
        printf("%c",'*');
    } 
      printf("%c",'*');
}
int main()
{    int i;
    printstar(15);
    return 0;
}                                                          //with argument and without return value