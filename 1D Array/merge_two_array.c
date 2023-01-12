#include <stdio.h>
#define MAX_SIZE 100      // Maximum size of the array

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    /* Input size of first array */
    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    /* Input elements in first array */
    printf("Enter elements in first array : ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    /* Input size of second array */
    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);

    /* Input elements in second array */
    printf("Enter elements in second array : ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    mergeSize = size1 + size2;


    /*
     * Merge two array in ascending order 
     */
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        /* 
         * If all elements of one array 
         * is merged to final array
         */
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }


        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    /*
     * Merge remaining array elements
     */
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }


    /* 
     * Print merged array
     */
    printf("\nArray merged in ascending order : ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t", mergeArray[i]);
    }

    return 0;
}