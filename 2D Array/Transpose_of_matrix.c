#include<stdio.h>
int main()
{
    int n;
    printf("enter order of materix:");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("enter element of matrix:\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
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
    int b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("transpose matrix\n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }printf("\n");
    }
}