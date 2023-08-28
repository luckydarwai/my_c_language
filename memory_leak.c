#include<stdio.h>
#include<stdlib.h>
                
int main()
{
    int a,i=0;
    int *ptr;
    while(i<43387)
    {
        printf("Wellcome to my code\n");
        ptr=malloc(3444*sizeof(int));
        if(i%100==0)
        {
            getchar();
        }
        i++;
    free(ptr); //without this we will encounter a sitiation of memory leak
    }
    return 0;
}