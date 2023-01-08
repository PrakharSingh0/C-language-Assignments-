#include<stdio.h>
int main()
{
    int n=0;
    printf("enter order of materix:");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("enter element of matrix 1:");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    int b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    int f=1;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                f++;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("symmetric matrix");
    }
    else
    {
        printf("not symmetric matrix");
    }
}