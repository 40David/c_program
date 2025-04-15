#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main()
{
    int r,V,A;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    V=4*M_PI*pow(r,3)/3;
    A=4*M_PI*pow(r,2);
    printf("thve volume of the sphere is %d\n and area is %d\n",V,A);
}