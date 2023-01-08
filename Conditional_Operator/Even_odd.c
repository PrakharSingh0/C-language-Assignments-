#include <stdio.h>

int main()
{
    int num;

    
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    
    (num%2 == 0) 
        ? printf("The number is EVEN") 
        : printf("The number is ODD");

    return 0;
}