#include<stdio.h>
#include<string.h>
int main()
{
char str[30]="HELLO WORLD";
int i,count=0;
for(i=0;str[i]!='\0';i++)
{
if (str[i]==' ')
count++;
}
printf("%d",count);
return 0;
}

