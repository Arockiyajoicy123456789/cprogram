#include<stdio.h>
int main()
{
int num1,num2,multiple;
printf("Enter the number:");
scanf("%d %d",&num1,&num2);
multiple=(num1>num2)?num1:num2;
while(1)
{
if(multiple%num1==0&&multiple%num2==0)
{
printf("LCM OF %d and %d is %d",num1,num2,multiple);
break;
}
++multiple;
}
return 0;
}
