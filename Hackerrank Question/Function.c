#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int max;
    int arr[4];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    for(int i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
