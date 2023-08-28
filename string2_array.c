#include<stdio.h>
#include<string.h>
int main()
{
        char  s[]="Hello";
        char t[] ="World";
        char str[]="Lucky";
        int str_length;
         strcat(s,t);
        printf("string = %s\n",s);
        str_length=strlen(str);
        printf("length=%d",str_length);

    return 0;
}