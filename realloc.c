#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n;
    printf("Enter the size of array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the value no. %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf(" the value at %d of this array is %d\n",i,ptr[i]);
    }

    printf("Enter the size of new array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the new value no. %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf(" the new value at %d of this array is %d\n",i,ptr[i]);
    }
    
    return 0;
}