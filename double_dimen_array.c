#include<stdio.h>
int main()
{
    int marks[2][4]={{2,4,6,8},{1,3,5,7}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}