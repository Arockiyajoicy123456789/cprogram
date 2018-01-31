#include<stdio.h>
int main()
{
int i,a[10],n;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d %d\n",a[i],i);
}
}
