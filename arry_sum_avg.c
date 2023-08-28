#include<stdio.h>
int main()
{                                        // |0|1|2|3|4|5|6|7|8|9|
    int a[10],i,sum=0;
    float avg;
    printf("Enter the number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    sum=sum+a[i];
    avg=sum/10;
 printf("Average of %f ",avg);
 return 0;
}