#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number ");
    scanf("%d%d",&i,&j);
    for(i,j,i<5;j<5;i++,j++)
    {
        printf("%d %d\n",i,j);
    }
    return 0;
}