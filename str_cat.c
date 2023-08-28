#include<stdio.h>
#include<string.h>
int main()
{
        char str1[10];
        char str2[10];
     //   char name[10];
        gets(str1);
        gets(str2);
        
        printf("%s is a friend of %s ",str1,str2);
    return 0;
}