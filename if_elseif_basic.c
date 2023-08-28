#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);
    if(age>=18)
    {
        printf("you can vote !");
    }
    else if (age>10)
    {
        printf("you are between 1o to 18 you can vote for kids");
    }
    else if(age>=1)
    { 
        printf("He/she is a baby",age);
    }
    else 
    printf("you cannot vote !");
    return 0;
}