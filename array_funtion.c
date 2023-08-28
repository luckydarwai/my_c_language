#include <stdio.h>
int fun1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of at %d is %d\n", i, array[i]);
    }
    array[0] = 90; // very important point that if you change any value here , it gets reflected in main()
    return 0;
}
// void fun2(int* ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of at %d is %d\n", i, *(ptr + i));
//     }
//     *(ptr+2) = 63;
// }
// void fun3(int arr[2][2]){
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)        {
//            printf("The value at %d%d is %d\n",i,j,arr[i][j]);
//         }
        
//     }
    
// }
int main()
{
     int arr[] = {10, 20, 30, 40};
   // int arr[][2]={{7,14},{8,16}};
    printf("The value of index 0 is %d\n",arr[0]);
    fun1(arr);
    printf("The value of index 0 is %d\n",arr[0]);
    // fun2(arr);
    // printf("after changed the value\n");
    // fun2(arr);
    // printf("The value of index 0 is %d\n",arr[0]);
   // fun3(arr);
    return 0;
}