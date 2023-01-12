#include <stdio.h>

#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];  
    int i, size, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("\nTotal negative elements in array = %d", count);

    return 0;
}