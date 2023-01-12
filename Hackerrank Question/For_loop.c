#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    char *words[] = {"one","two","three", "four", "five", "six", "seven","eight", "nine"};

    int a, b;
    
    scanf("%d\n%d", &a, &b);
    
      
    for(int i=a; i<=b; i++){
        (i<=9)?printf("%s\n", words[i-1]):((i%2==0)?printf("even\n"):printf("odd\n"));
    }
    return 0;
}
