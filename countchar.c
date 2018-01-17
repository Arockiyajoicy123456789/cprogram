#include<stdio.h>
int main()
{
 int i;
 int count=0;
 char str[20];
 printf("Enter string : ");
 scanf("%s",&str);
 for(i=0; str[i]!=NULL; i++)
 {
   count++;
  }
 printf("\nNumber of characters in string : %d",count);
 return 0;
}
