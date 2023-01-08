#include<stdio.h>
int main()
{
    int n=0;
    printf("enter order of materix:");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("enter element of matrix 1:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);}}
    int b[n][n];
    printf("enter element of matrix 2:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);}}
    int c[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];}}
    printf("sum of both matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d ",c[i][j]);}
        printf("\n");}
}