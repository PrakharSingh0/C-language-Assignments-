#include<stdio.h>
int isprime(int a,int b)
{
    int i,j,count=0;
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
        count=0;
    }
}
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    isprime(num1,num2);
}