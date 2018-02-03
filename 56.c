#include<stdio.h>
#include<string.h>
int main()
{
char a[20]="HELLOWORLD.123";
int i,count=0;
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='A'||a[i]<='Z')&&(a[i]>='1'||a[i]<='9'))
count++;
}
printf("YES");
}

