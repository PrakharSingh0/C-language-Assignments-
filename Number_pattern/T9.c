#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=i; j<N; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }
        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}