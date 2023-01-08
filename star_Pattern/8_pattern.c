#include <stdio.h>

int main()
{
    int i, j, size;

    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<size*2; i++)
    {
        for(j=1; j<=size; j++)
        {
            if((i==1 && (j==1 || j==size)) || 
               (i==size && (j==1 || j==size)) || 
               (i==size*2-1 && (j==1 || j==size)))
            {
                printf(" ");
            }
            else if(i==1 || i==size || i==(size*2)-1 || j==1 || j==size)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}