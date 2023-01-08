#include<stdio.h>
void circle(int a)
{
    int dia=2*a;
    int cir=2*3.14*a;
    int area=3.14*a*a;
    printf("diametr circumfrence and area are %d,%d,%d",dia,cir,area);
}
int main()
{
    int num;
    printf("enter redius :");
    scanf("%d",&num);
    circle(num);
}