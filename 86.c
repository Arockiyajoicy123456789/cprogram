#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  scanf("%s",a);
  int i,count=0;
  int k;
  k=strlen(a);
  for(i=0;i<k;i++)
  {
    if(a[i]==a[i+1])
      {
        count++;
      }
  }
    if(count>0)
    {
    printf("NO");
    }
    else
    {
    printf("YES");
    }
}
