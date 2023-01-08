#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // First part of the pattern
    for(i=1; i<=N; i++)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("%d", i);

        // Print central spacces
        for(j=1; j<=((N - i) * 2 - 1); j++)
        {
            printf(" ");
        }

        // Don't print for last row
        if(i != N)
            printf("%d", i);

        // Moves on to the next row
        printf("\n");
    }

    // Second part of the pattern
    for(i=N-1; i>=1; i--)
    {
        // Print trailing spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        printf("%d", i);

        // Print central spaces
        for(j=1; j<=((N - i ) * 2 - 1); j++)
        {
            printf(" ");
        }

        printf("%d", i);

        // Move on to the next line
        printf("\n");
    }

    return 0;
}