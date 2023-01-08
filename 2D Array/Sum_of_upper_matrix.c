#include<stdio.h>
int main()
{
    int n;
    printf("enter order of materix");
    scanf("%d",&n);
    int a[n][n],i,j;
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element of materix:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("uppre matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("sum of upper matrix %d",sum);
}