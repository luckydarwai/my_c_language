#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter the number");
    scanf("%d",&i);
    while(i<50)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}