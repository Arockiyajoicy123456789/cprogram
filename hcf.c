#include<stdio.h>
int main()
{
int i,min,num1,num2,hcf=1;
printf("Enter any two number to find HCF:");
scanf("%d%d",&num1,&num2);
min=(num1<num2)?num1:num2;
for(i=1;i<=min;i++)
{
if(num1%i==0&&num2%i==0)
{
hcf=1;
}
}
printf("HCF OF %d and %d=%d\n",num1,num2,hcf);
return 0;
}
