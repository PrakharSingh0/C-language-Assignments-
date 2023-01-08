#include <stdio.h>

#define SIZE 10
int main()
{
    int i, j, N;
    int board[SIZE][SIZE];
    int left, top;

    left = 0;
    top  = SIZE - 1;
    N    = 1;

    for(i=1; i<=SIZE/2; i++, left++, top--)
    {
        // Fill from left to right
        for(j=left; j<=top; j++, N++)
        {
            board[left][j] = N;
        }

        // Fill from top to down
        for(j=left+1; j<=top; j++, N++)
        {
            board[j][top] = N;
        }

        // Fill from right to left
        for(j=top-1; j>=left; j--, N++)
        {
            board[top][j] = N;
        }

        // Fill from down to top
        for(j=top-1; j>=left+1; j--, N++)
        {
            board[j][left] = N;
        }
    }

    // Print the pattern
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%-5d", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}