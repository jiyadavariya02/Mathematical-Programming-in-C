#include<stdio.h>
#define PI 3.14159
int main()
{
float area,radius;
printf("Enter Radius of Circle:");
scanf("%f",&radius);
area=PI*radius*radius;
printf("Area of Circle=%2f",area);
return 0;
}
