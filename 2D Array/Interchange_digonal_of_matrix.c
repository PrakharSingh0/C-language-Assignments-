#include<stdio.h>
int main()
{
    int n;
    printf("enter order of materix");
    scanf("%d",&n);
    int a[n][n],i,j,sum=0;
    int b[n][j],c[n][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element of materix:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix before changing digonal\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    int t;
    for (i=0;i<n;++i)
    {
         t = a[i][i];
         a[i][i] = a[i][n-i-1];
         a[i][n-i-1] = t;
    }

    printf("matrix after changing digonal\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}