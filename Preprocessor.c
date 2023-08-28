#include<stdio.h>
#include"include.c" // include current directly file.
#define PI 3.14
#define square(r) r*r

int main()
{
        printf("The res is %d\n",resultant());
        float var=PI;
        float r=4;
        printf("The value of PI is %f\n",var); 
        printf("The area of circle is %f\n",PI*square(r)); 
    return 0;
}