#include<stdio.h>
int main()
{
char str[30];
int i,count=0;
printf("Enter the string:");
scanf("%s",&str[i]);
for(i=0;str[i]!=NULL;i++)
{
if (str[i]==' ')
count++;
printf("%d",count);
}
return 0;
}
