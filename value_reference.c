#include<stdio.h>
/* swaping two function using call by reference */
void swap(int *x,int *y);
int main()
{
    int a=10,b=20;
    printf("now a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After swaping a=%d and b=%d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;


}