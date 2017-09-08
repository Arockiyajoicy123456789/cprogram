#include<stdio.h>
int main()
{
int i,l=0,m,o;
printf("Enter the integer:");
scanf("%d",&n);
o=n;
while(n!=0)
{
m=n%10;
l=l*10+m;
n/=10;
}
if(o==l)
printf("%d is a palindrome.",o);
else
printf("%d is not a palindrome;",o);
return 0;
}

