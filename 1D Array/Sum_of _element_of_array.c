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
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
}
