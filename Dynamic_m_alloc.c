// Exersice :- ABC is a pvt company and in this conpany we want to store employee details and prints work on it.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
   char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i + 1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));   // here , we want to store string so we will need to    //    extra +1 chars bcz it takes a one more null charcter.
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}
