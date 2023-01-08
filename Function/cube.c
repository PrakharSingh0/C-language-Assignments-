#include<stdio.h>

// fuction 
int cube(int a)
{
    int c=a*a*a;
    return c;
}



// main functon 
int main()
{
    int num;
    printf("enter num :");
    scanf("%d",&num);
    int c=cube(num);
    printf("cube of %d is %d",num,c);
}