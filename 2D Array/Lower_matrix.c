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
    printf("matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("lower triangular matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}