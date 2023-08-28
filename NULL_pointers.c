#include <stdio.h>
int main()
{
    int n = 23;
    float f = 55.5;
   int *ptr=NULL;  // we cannot dereference directelly Null pointers
   ptr=&n;           // now pointer hold address of int n.
  if(ptr!=NULL)
  {
   printf("The value of n is = %d",*ptr);
  }
  else{
      printf("The pointer is a NULL pointer and this will cannot be dereferenced.");
  }
    return 0;
}