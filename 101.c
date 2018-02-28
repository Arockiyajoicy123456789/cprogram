#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int i,n;
scanf("%s %d",a,&n);
strrev(a);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
