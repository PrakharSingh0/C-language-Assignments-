#include <stdio.h>

int main()
{
    int i, j, rows; 
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}