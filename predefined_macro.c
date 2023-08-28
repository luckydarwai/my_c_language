#include<stdio.h>
#include<string.h>
int main()                                    
{
        printf("File name is %s\n",__FILE__);
       // printf(" Today's date is %s\n",__DATE__);
      //  printf(" current Time is %s\n",__TIME__);
         printf(" Line Number is %d\n",__LINE__);
         printf(" ANSI is %d\n",__STDC__);
    return 0;
}