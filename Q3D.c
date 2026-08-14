#include<stdio.h>
int main()
{
int n1=11,n2=3;
float result1;
result1=n1/n2;
printf("Implicit Conversion=%2f\n",result1);
float result2;
result2=(float)n1/n2;
printf("Explicit Conversion=%2f\n",result2);
return 0;
}