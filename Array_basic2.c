#include<stdio.h>
int main()
{
    int i, marks[4];
    for (int i = 0; i < 4; i++)
    { 
    printf("Enter the value of element of %d an array\n",i);
    scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
    printf("The value of %d element of the array is==%d\n",i,marks[i]);
    }
    printf("\n");
    return 0;
}
