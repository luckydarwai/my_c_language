#include<stdio.h>
int main()
{      // mode in which we will opennig a file
       // r, w, r+, w+, a, a+.
        FILE *ptr=NULL;
        ptr=fopen("codefile.txt","a"); // this is function for access you file
       // for reading a character of your file by using this function.
        char c=fgetc(ptr);
        printf("The character I read was %c\n",c);
       //  c=fgetc(ptr);
        // printf("The character I read was %c\n",c);
 
        // for reading a string of your file by using this function.
        // char str[15];
        // fgets(str,7,ptr);
        // printf("The string is %s\n",str);
        
        //  fputc('L',ptr); // this is function for writing a character on .txt file.
        // fputs("this is contant",ptr);  // this is function for write string on .txt file.
      fclose(ptr);
    return 0;
}