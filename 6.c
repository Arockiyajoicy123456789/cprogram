#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  char b[20];
  scanf("%s %s",a,b);
  int i,count=0,j,count1=0;
  int k,l;
  k=strlen(a);
  l=strlen(b);
  for(i=0;i<k;i++)
  {
    if(a[i]==a[i+1])
      {
        count++;
      }
  }
  for(j=0;j<l;j++)
  {
    if(b[j]==b[j+1])
    {
      count1++;
    }
  }
    if(count>0&&count1>0)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
}
