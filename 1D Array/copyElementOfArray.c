#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int source[MAX_SIZE], dest[MAX_SIZE];
    int i, size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter elements of source array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }
    for(i=0; i<size; i++)
    {
        dest[i] = source[i];
    }
    printf("\nElements of source array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", source[i]);
    }
    printf("\nElements of dest array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", dest[i]);
    }

    return 0;
}