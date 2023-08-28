#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number");
    scanf("%d",&i);
    while(i=i*100)
    {
        printf("%d\n",i);
       // i=i+1;
    }
    return 0;
}