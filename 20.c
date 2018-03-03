#include <stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]+3);
    }
}

