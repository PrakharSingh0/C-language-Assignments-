#include<stdio.h>
int main()
{
    int n=0;
    printf("enter no of materix:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("negative no:");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
}