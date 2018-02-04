#include<stdio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
if(n%2==0)
{
printf("%d",n);
}
else
{
n=n-1;
printf("%d",n);
}
}
