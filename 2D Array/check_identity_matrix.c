#include<stdio.h>
int main()
{
    int n;
    printf("enter order of materix:");
    scanf("%d",&n);
    int a[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                {
                    count++;
                }
            }
            else
            {
                if(a[i][j]==0){
                    count++;
                }
            }
        }
    }
    if(count==n*n)
    {
        printf("identy matrix");
    }
    else{
        printf("not identy matrix");
    }
}