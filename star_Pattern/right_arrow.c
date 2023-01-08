#include <stdio.h>

int main()
{
    int i, j, n;

    // Input number of rows from user
    printf("Enter value of n : ");
    scanf("%d", &n);

    // Print the upper part of the arrow
    for(i=1; i<n; i++)
    {
        // Print trailing (2*rownumber-2) spaces
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        // Print inverted right triangle star pattern
        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Print lower part of the arrow
    for(i=1; i<=n; i++)
    {
        // Print trailing (2*n - 2*rownumber) spaces
        for(j=1; j<=(2*n - 2*i); j++)
        {
            printf(" ");
        }

        // Print simple right triangle star pattern
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}