#include<stdio.h>
int main()
{
    int n;
    printf("enter order of materix");
    scanf("%d",&n);
    int a[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r,c;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r+=a[i][j];
        }
        printf("sum of %d row :%d\n",i+1,r);
        r=0;
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c+=a[j][i];
        }
        printf("sum of %d coloumn :%d\n",i+1,c);
        c=0;
    }
}