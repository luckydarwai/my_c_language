// 0 1 1 2 3 5 8 13 21 
#include<stdio.h>
                
int main()
{
    int a = 1 , b=0, c;
    int num;
    printf("Enter the value you want to get ............");
    scanf("%d",&num); //4

    for (int i = 1; i <= num; i++)
    {
        c = a+b;
     printf("%d",c);       
     a=b;
     b=c;
}
    // printf("\t");
    
           
    return 0;
}