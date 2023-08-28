/*Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reverse triangular star pattern
Then print the pattern accordingly
*
**
***
****  --> Triangle star pattern

*****
****
***
**
*   --> reverse triangle star pattern
*/
#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
void reversestarpattern(int rows){

     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j <= rows-i-1; j++)
         {
             printf("*");
         }
         printf("\n");
     }
}
int main()
{
    int rows, choise;
    printf("Enter 0 for star pattern and 1 for reverse star pattern == \n");
    scanf("%d", &choise);
    printf("How many rows do you want =");
    scanf("%d", &rows);
  switch (choise)
  {
  case 0:       
      starpattern(rows);
      break;
  case 1:       
      reversestarpattern(rows);
      break;
  
  default:
    printf("you have entered an invalid choise plz try next time");  
        break;
  }
    return 0;
}