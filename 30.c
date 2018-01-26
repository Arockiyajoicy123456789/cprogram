#include <stdio.h>

int main()
{
    int h1,m1,h2,m2,h3,m3;
    printf("Enter the first hour and minute:");
    scanf("%d %d",&h1,&m1);
    printf("Enter the second hour and minute:");
    scanf("%d %d",&h2,&m2);
    h3=h1-h2;
    m3=m1-m2;
    printf("hour and minutes are:%d %d",h3,m3);
}
