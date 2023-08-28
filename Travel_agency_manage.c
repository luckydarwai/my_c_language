/* you manage a traval agency and you want to stor n or n=3  driver's data input their following details.
1. Name
2. Driving Lisence No
3. Route
4. Kms
using your structure
*/
#include<stdio.h>
#include<string.h>
typedef struct driver{
    char name[20];
    char dl_no[10];
    char route[20];
    int kms;

}drive;
int main()
{     
    drive d1,d2,d3;
    printf(" Enter First Driver details \n");

    printf("Enter driver name \n");
    scanf("%s",&d1.name);
    printf("Enter driver dl_n0 \n");
    scanf("%s",&d1.dl_no);
    printf("Enter driver route \n");
    scanf("%s",&d1.route);
    printf("Enter driver kms \n");
    scanf("%d",&d1.kms);

     printf(" Enter Second Driver details \n");

    printf("Enter driver name \n");
    scanf("%s",&d2.name);
    printf("Enter driver dl_n0 \n");
    scanf("%s",&d2.dl_no);
    printf("Enter driver route \n");
    scanf("%s",&d2.route);
    printf("Enter driver kms \n");
    scanf("%d",&d2.kms);

    printf(" Enter Third Driver details \n");

    printf("Enter driver name \n");
    scanf("%s",&d3.name);
    printf("Enter driver dl_n0 \n");
    scanf("%s",&d3.dl_no);
    printf("Enter driver route \n");
    scanf("%s",&d3.route);
    printf("Enter driver kms \n");
    scanf("%d",&d3.kms);
        
        printf("*********printing driver's details*************\n");
    
    printf("first Driver name is = %s\n",d1.name);
    printf("first Driver dl_no is = %s\n",d1.dl_no);
    printf("first Driver route is = %s\n",d1.route);
    printf("first Driver kms is = %s\n",d1.kms);

    printf("Second Driver name is = %s\n",d2.name);
    printf("Second Driver dl_no is = %s\n",d2.dl_no);
    printf("Second Driver route is = %s\n",d2.route);
    printf("Second Driver kms is = %s\n",d2.kms);

    printf("Third Driver name is = %s\n",d3.name);
    printf("Third Driver dl_no is = %s\n",d3.dl_no);
    printf("Third Driver route is = %s\n",d3.route);
    printf("Third Driver kms is = %s\n",d3.kms);


    return 0;
}