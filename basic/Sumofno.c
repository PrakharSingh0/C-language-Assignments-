#include <stdio.h>

int main()
{
    int num1, num2, sum;
    
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    
   
    sum = num1 + num2;
    
   
    printf("Sum of %d and %d = %d", num1, num2, sum);
    
    return 0;
}