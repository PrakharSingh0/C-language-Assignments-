#include <stdio.h>
#define MAX_SIZE 10


int compare(char * str1, char * str2);


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    res = compare(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}

int compare(char * str1, char * str2)
{
    int i = 0;

  
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }

    return str1[i] - str2[i];
}