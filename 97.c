#include<stdio.h>
void main()
{
  int n,temp;
  scanf("%d",&n);
  temp=n%10;
  n=n/10;
  printf("%d%d",temp,n);
}
  
