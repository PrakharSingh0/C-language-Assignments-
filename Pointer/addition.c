#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the no:");
    scanf("%d %d",&x,&y);
    int *p1=&x,*p2=&y;
    printf("additon is =:%d",*p1+*p2);
}