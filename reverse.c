#include<stdio.h>
int main()
{
int n,reversednumber=0,remainder;
printf("Enter an integer:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reversednumber=reversednumber*10+remainder;
n/=10;
}
printf("Reversed number=%d",reversednumber);
return 0;
}

