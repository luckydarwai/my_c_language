#include<stdio.h>
int main()
{
        FILE *ptr=NULL;
        char str[64]= " Wellcome to File ";
        // *******Reading a File*******
    //  ptr=fopen("myfile.txt","r");
    //  fscanf(ptr,"%s",str);
    //  printf("\nThe contant of this file has = %s\n",str);
        
        // *******Writing a File*******
        // ptr=fopen("myfile.txt","a"); // a  use for write more taxt after prevoious contant .
        // fprintf(ptr,"%s",str);
        ptr=fopen("myfile.txt","w");
        fprintf(ptr,"%s",str);

    return 0;
}