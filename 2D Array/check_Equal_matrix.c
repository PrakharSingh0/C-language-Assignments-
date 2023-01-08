#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter row and column of materix 1:");
    scanf("%d %d",&n1,&n2);
    int n3,n4;
    printf("enter row and column of materix 2:");
    scanf("%d %d",&n3,&n4);
   // inputing matrix
    int a[n1][n2],b[n3][n4],i,j,temp=0;
    printf("enter element of matrix 1:");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
        scanf("%d",&a[i][j]);}}   
    printf("enter element of matrix 2:");
    for(i=0;i<n3;i++){
        for(j=0;j<n4;j++){
        scanf("%d",&b[i][j]);}}
    //checking matrix
    if(n1==n3 && n2==n4){
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(a[i][j]==b[i][j])
                {temp++;}
                } } }
    // Printing matrix
    if(temp>=n1*n2){
    printf("Equal Matrix");}
    else{printf("Not Equal Matrix");}
}