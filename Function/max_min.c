#include<stdio.h>
int max(int a,int b)
{
    return(a>b?a:b);
}
int min(int a,int b)
{
    return(a>b?b:a);
}
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int b=max(num1,num2);
    int c=min(num1,num2);
    printf("max %d min %d",b,c);
}