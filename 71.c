#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
char b[10];
printf("enter the string:");
scanf("%s",a);
strcpy(b,a);
a=strrev(a);
i=strcmp(a,b);
if(i==0)
{
printf("yes");
}
else
{
printf("No");
}
}
