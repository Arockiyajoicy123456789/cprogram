#include<stdio.h>
void main()
{
int n1,n2;
scanf("%d%d",&n1,&n2);
while(n1!=n2)
{
if(n1>n2)
{
n1=n1-n2;
}
else
{
n2=n2-n1;
}
}
printf("GCD is:%d",n1);

}
