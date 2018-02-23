#include <stdio.h>
void main()
{
    int a[20],i,min,n;
    scanf("%d",&n);
    printf("Enter %d number:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum value is:%d",min);
}
