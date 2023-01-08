#include<stdio.h>
int isarm(int a,int b)
{
    int i,j;
    int r,sum=0,temp;        
    for(i=a;i<=b;i++)
    {  
        temp=i;
        while(i>0)    
        {    
        r=i%10;     
        sum=sum+(r*r*r);    
        i=i/10;    
        }    
        if(temp==sum)
        {
            printf("%d ",i);
        }    
    }
}
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    isarm(num1,num2);
}