#include <stdio.h>

int main()
{
    int number;
    int res=0,no;;     // res=6
    printf("Enter the number");
    scanf("%d", &number);
    while (number!=0)
    
    
    {
             no = number % 10;     // 246
            res = res * 10 + number/ 10;
             number = number/10;
            
         
    }
            printf("result number is = %d", res);

    return 0;
}