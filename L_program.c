#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter The Value sequence by i and n  ===");
    scanf("%d%d",&i,&n);
    for(i;i<=n;i++)
    { printf("Enter The Value sequence by j and n ===");
    scanf("%d%d",&j,&n);
          for(j;j<=n;j++)
        printf("#\n");   
    }
    
    return 0;
}