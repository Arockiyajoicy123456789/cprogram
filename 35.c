#include<stdio.h>
int main()
{
char str[20];
int i,count=0;
printf("Enter the string:");
scanf("%s",&str[i]);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]>=1||str[i]<=9)
count++;
}
printf("%d",count);
}
