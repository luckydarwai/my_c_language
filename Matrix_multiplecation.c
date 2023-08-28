#include<stdio.h>
int main()
{
        int a[2][2],b[2][2],c[2][2];
        int sum=0;
        printf("Enter 1st matrix element\n");
        for(int i=0; i<2;i++)
        {
            for(int j=0; j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        printf("Enter 2nd matrix element\n");
        for(int i=0; i<2;i++)
        {
            for(int j=0; j<2;j++)
            {
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }
        printf("\nMultiplying two matrices...");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = 0;
            for (int k = 0; k < 2; k++)
                sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}