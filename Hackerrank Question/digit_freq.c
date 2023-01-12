#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[1000];
    scanf("%s",a);
    int b[10],i;
    for(int i=0; i<10; i++)
    {
        b[i] = 0;
    }
    for (i=0;i<strlen(a);i++)
    {
        if((a[i] >= '0') && (a[i] <= '9'))
        {
        b[a[i]-'0']++;        
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
