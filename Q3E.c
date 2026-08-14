#include<stdio.h>
int main()
{
int rn;
float m;
char g[10];
printf("Enter Roll No.:");
scanf("%d",&rn);
printf("Enter Marks:");
scanf("%f",&m);
printf("Enter Grade:");
scanf("%s",&g);
printf("\n****STUDENT DETAILS****\n");
printf("Roll No.:%d\n",rn);
printf("Marks:%2f\n",m);
printf("Grade:%s\n",g);
return 0;
}