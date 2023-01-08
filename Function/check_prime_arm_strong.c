#include<stdio.h>
int isprime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime no\n");
    }   
    count=0;
}
int isarm(int n)
{
    int r,sum=0,temp;      
    temp=n;    
    while(n>0)    
    {    
    r=n%10;     
    sum=sum+(r*r*r);    
    n=n/10;    
    }    
    if(temp==sum)
    {
        printf("armstrong no\n");
    }    
}
int isstrong(int b)
{
    int i, sum=0,fact,temp,rem;
    temp=b;
    while(b>0)
    {
        rem=b%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        b=b/10;
    }
    if(temp==sum)
    {
        printf("strong no");
    }
}
int main()
{
    int num1;
    scanf("%d",&num1);
    isprime(num1);
    isstrong(num1);
    isarm(num1);
}