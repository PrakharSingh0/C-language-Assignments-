#include <stdio.h>
#define BITS sizeof(int) * 8

int main()
{
    int num, msb;

    
    printf("Enter any number: ");
    scanf("%d", &num);

   
    msb = 1 << (BITS - 1);

    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}