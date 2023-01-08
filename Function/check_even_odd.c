#include<stdio.h>

// fuction 
int even(int a)
{
if(a%2==0)
{
    printf("number is even\n");
}
else{


printf("number is odd");
}
}


// main functon 
int main()
{
    int num;
    printf("enter num :");
    scanf("%d",&num);
    even(num);
}