#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    switch (age)
    {
    case 3:
        printf("The age is 3 \n");
        break;
    case 14:
    printf("The age is 14\n");
        break;
    case 23:
        printf("THe age is 23\n");
         break;
    default:
       printf("Age is not 3,13 or 23");
        break;
    }
    return 0;
}