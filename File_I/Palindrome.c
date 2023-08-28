#include <stdio.h>
int chk_palindrome(int num)
{
    int newnum, rev = 0; // 987
    newnum = num;
    while (num != 0) // if num = 789
    {
        rev = rev * 10 + num % 10;
        num = num / 10; //  789   78    7
    }
    printf("The reversed number is %d\n", rev);
    if (newnum == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the number for check Palindrome or not = \n");
    scanf("%d", &num);
    int fun=chk_palindrome(num);
    if (fun)
    {
        printf(" Number is palindrome\n");
    }
    else
    {
        printf("Number is not a palindrome\n");
    }

    return 0;
}