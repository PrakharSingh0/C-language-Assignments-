#include <stdio.h>

int main()
{
    int i, j, N;
    int star, spaces;
    printf("Enter number of columns : ");
    scanf("%d", &N);
    spaces = N-1;
    star = 1;
    for(i=1; i<N*2; i++)
    {
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        for(j=1; j<=star; j++)
            printf("*");
       
        printf("\n");
        
        if(i < N) 
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}