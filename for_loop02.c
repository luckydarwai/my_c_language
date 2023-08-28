#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number ");
    scanf("%d%d",&i,&j);
    for(i,j=0;i<5;i++)
    {
        printf("%d %d\n",i,j);
    }
    return 0;
}