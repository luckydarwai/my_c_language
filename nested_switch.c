#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your marks");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("The age is 3 \n");
        
        switch (marks)
        {
        case 95:
            printf("your marks is 95\n");
            break;
         default:
           printf("YOur marks is not 95");   
            break;
        }
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