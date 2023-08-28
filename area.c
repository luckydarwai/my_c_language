#include <stdio.h>
#include <math.h>
float Gdistance(int x1,int x2,int y1, int y2){
 int D;
 D= sqrt((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
 return D;
}

float circle_area(int x1,int x2,int y1, int y2,float(*distance)(int x1,int x2,int y1, int y2))
{
    return distance(x1,y1,x2,y2);
}
int main()
{
     int r;
    int x1,x2,y1,y2;
    float D,radius,A; // declared for distance
    printf("Enter x1 value = ");
    scanf("%d",&x1);
    printf("Enter x2 value = ");
    scanf("%d",&x2);
    printf("Enter y1 value = ");
    scanf("%d",&y1);
    printf("Enter y2 value = ");
    scanf("%d",&y2);
    D=Gdistance(x1,x2,y1,y2);
    printf("Difference between two points is = %f\n",D);
   
    printf("Enter the radius = ");
    scanf("%d", &r);
    radius = circle_area(x1,x2,y1,y2,Gdistance);
    printf("The Area's circle is %f\n", radius);
           
    return 0;
}