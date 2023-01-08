#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter row of materix 1:");
    scanf("%d",&n1);
    printf("enter coloum of materix 1:");
    scanf("%d",&n2);
    int n3,n4;
    printf("enter row of materix 2:");
    scanf("%d",&n3);
    printf("enter coloum of materix 2:");
    scanf("%d",&n4);
    //checking matrix
    int con=0; 
    if(n2!=n3)
    {
        printf("materix cant be multiply");
    }
    else
    {
        con=1;
    }
    // inputing matrix
    int a[n1][n2],i,j;
    int b[n3][n4];
    printf("enter element of matrix 1:");
    if(con=1)
    {
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    
        printf("enter element of matrix 2:");
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n4;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    // multiplying matrix
    int c[10][10],temp=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n4;j++)
        {
            for(int k=0;k<n3;k++)
            {
                temp=temp+a[i][k]*b[k][j];
            }
            c[i][j]=temp;
            temp=0;
        }
    }
    // Printing matrix
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n4;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}