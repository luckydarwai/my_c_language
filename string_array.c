#include<stdio.h>
//#include<string.h>
void printstr(char str[])
{
    int i=0;
    while (str[i] !='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    
}
int main()
{
      // char str[]={'L','U','C','K','Y','\0'};
      // char string[]="LUCKY";
     char str[40];
      gets(str);
      //puts(str);
      printf("using custum function printstr\n");
      printstr(str); 
      printf("using printf %s\n",str);
      printf("using puts :\n");
      puts(str);
return 0;
}