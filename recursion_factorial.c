#include <stdio.h>
int factorial(int num)
{
    if ((num == 0 || num == 1))
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));     /*ni=n*(n-1) This is a formolla to solve the any
                                                                factorial value*/
    }
}
int main()
{
    int num;
    printf("Enter the number you want to factorial of \n");
    scanf("%d", &num);
    printf("The factorial of %d is = %d", num, factorial(num));
    return 0;
}