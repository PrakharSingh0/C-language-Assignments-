#include<stdio.h>
int main()
{
    int n=0;
    printf("enter order of materix:");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("enter element of matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);}}
    int b,c[n][n];
    printf("enter scaler value:");
    scanf("%d",&b);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        c[i][j]=b*a[i][j];
        }}
    printf("multiplication of matrix by %d:\n",b);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d ",c[i][j]);}
        printf("\n");}}
    