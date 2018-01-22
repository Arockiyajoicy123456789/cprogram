#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values:");
scanf("%d %d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("EVEN");
}
else
{
printf("ODD");
}
}
