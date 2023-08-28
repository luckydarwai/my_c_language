#include<stdio.h>
#include<stdlib.h>
// int *myfun(){
//     // a is local variable and goes out of scope on function return over.
//     int a=33;
//     return &a;
// }
// int main()
// {
//         int *ptr=myfun();  // ptr points to the invalid location it meam this pointer belongs to the dangling pointer
//         printf("%d",*ptr);
//     return 0;
// }
int *functiondangling(){
    int a,b,sum;
    sum=a+b;
    return sum;
}
int main(){
    // case 1: De allocatin of a memory block
  int *ptr=(int*)malloc(3*sizeof(int));
  ptr[0]=34;
  ptr[1]=44;
  ptr[2]=54;
  free(ptr); // ptr is now a dangling pointer
  
//   case 2: function returning local variables address
int *dangptr=functiondangling();  // now , a dangling pointer 

// case 3 : if a variable goes out of scope 
int *danglingptr3;
{ // scope starts
    int a=12;
    danglingptr3=&a;
} // scope ends
// it is a out of scope it mean it points to the dangling pointer.
  return 0;

}

