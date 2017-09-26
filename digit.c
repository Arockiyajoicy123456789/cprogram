#include<stdio.h>
int main()
{
int number,reversenumber=0,digit;
printf("Enter the number:");
scanf("%d",&number);
while(number!=0)
{
digit=number%10;
reversenumber=reversenumber*10+digit;
number/=10;
}
printf("Reverse number=%d",reversenumber);
return 0;
}

