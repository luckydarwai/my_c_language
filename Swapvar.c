#include<stdio.h>
                
int main()
{
    int a;
    int b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    int temp = a;
       a=b;
       b= temp;
       printf(" After Swapping ");
       printf("value of a is %d ",a);
       printf("value of a is  %d",b);

    
           
    return 0;
}