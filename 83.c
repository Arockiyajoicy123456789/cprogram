#include<stdio.h>
void main()
{
  int a=110,b=100,c=99,d=10,e,f;
  printf("%d / %d\n",a,b);
  printf("(%d) % (%d)\n",c,d);
  e=a/b;
  f=c%d;
  printf("%d\n",e);
  printf("%d\n",f);
}
