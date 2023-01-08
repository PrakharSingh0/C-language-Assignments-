#include<stdio.h>
int fac(int a)
{
    int t=1;
    for(int i=1;i<=a;i++)
    {
        t*=i;
    }
    return t;
}
int main()
{
    int n,r;
    printf("enter N:");
    scanf("%d",&n);
    int temp;
   for(int i=0;i<=n;i++)
   {
    for(int j=n-i;j>0;j--)
    {
        printf(" ");
    }
    for (int k = 0; k <=i ; k++)
    {
        temp=fac(i)/(fac(k)*fac(i-k));
        printf("%d ",temp);
    }
    printf("\n");
   }
}
