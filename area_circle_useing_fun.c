#include<stdio.h>
#include<math.h>
float Gdistance(float x1,float x2,float y1, float y2){
 int D;
 D= sqrt((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
 return D;
}
float circle_area(int r)
{
    float A;
    float p;
    p = 3.14;
    A = p * r * r;
    return A;
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
    radius = circle_area(r);
    printf("The Area's circle is %f\n", radius);
           
    return 0;
}