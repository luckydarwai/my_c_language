#include<stdio.h>
int main()
{
   label:
  printf("we are inside label\n");
  goto end;
  printf(" i am a coder");

 goto label;
 end:
 printf("we are at end");
 return 0;
}