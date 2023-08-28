#include <stdio.h>
void printnumber();
int main()
{
    primenumber();
    return 0;
}

void printnumber()
{
    int n, i, flag = 0;
    printf("Enter a positive integer");
    scanf("%d\n", &n);
    for (i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not prime number");
    else
        printf("%d is a prime number");
}