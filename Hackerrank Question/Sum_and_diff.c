#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int x,y;
    scanf("%d %d",&a,&b);
    x=a+b;
    y=a-b;
    printf("%d %d\n",x,y);
    float p,q;
    float l,m;
    scanf("%f %f",&p,&q);
    l=p+q;
    m=p-q;
    printf("%.1f %.1f\n",l,m);
}
