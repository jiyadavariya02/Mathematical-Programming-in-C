#include<stdio.h>
int main()
{
int num=10;
printf("Initial Value =%d\n",num);
num+=5;
printf("After +=5:%d\n",num);
num-=3;
printf("After -=3:%d\n",num);
printf("Pre Increment(++num)=%d\n",++num);
printf("Post Decrement(num--)=%d\n",num--);
printf("Final Value=%d\n",num);
return 0;
}