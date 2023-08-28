#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int main(int argc, char const *argv[])
{
    int a,b,choice;
    printf("Enter the 2 numbers \n");
    scanf("%d%d",&a,&b);
    printf("Here, \npress 1 for addition\npress 2 for substraction\npress 3 for multiplication\npress 4 for division\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      printf("The sum is %d\n",sum(a,b));
        break;
    case 2:
      printf("The substraction is %d\n",sub(a,b));
        break;
    case 3:
      printf("The multiplication is %d\n",mul(a,b));
        break;
    case 4:
      printf("The division is %d\n",div(a,b));
        break;
    
    default:
    printf("you enterd invalid number!");
        break;
    }
    return 0;
}
