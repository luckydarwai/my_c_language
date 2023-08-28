#include<stdio.h>
                
int main()
{
    int number;
    int lastnum,firstnum;
    int i=0;
    printf("Enter the number");
    scanf("%d",&number);
     while(number!=0)
   // for(number;number>0;)
   {
        if (i==0)
        {
           lastnum = number%10;
           number = number /10;
           i++; 
        }
        firstnum = number % 10;
        number = number/10;
        
    }
    printf("firstnum : = %d & lastnum = %d",firstnum,lastnum);

    
           
    return 0;
}