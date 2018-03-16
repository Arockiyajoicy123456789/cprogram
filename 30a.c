#include<stdio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int i,j,k,n,l=0,m=0;
scanf("%s%s%d",a,b,&k);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]!=a[j])
{
l++;
}
if(b[i]!=b[j])
{
m++;
}
}
}
if((l-1)==k&&(m-1)==k)
{
printf("yes");
}
else
{
printf("No");
}
}
