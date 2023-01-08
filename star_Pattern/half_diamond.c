#include<stdio.h>

int main()
{
    int i, j, N, columns;
    printf("Enter number of columns:");
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            columns++;
        }
        else
        {
            columns--;
        }
        printf("\n");
    }

    return 0;
}