#include<stdio.h>
int main()
{
int i,n,m1=0,m2=1,t;
printf("Enter the numbers:");
scanf("%d",&n);
printf("Fibonacci series:");
for(i=1;i<=n;++i)
{
printf("%d",m1);
t=m1+m2;
m1=m2;
m2=t;
}
return 0;
}

