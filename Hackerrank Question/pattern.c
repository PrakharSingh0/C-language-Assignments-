#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int num;

  	// Complete the code to print the pattern.
    scanf("%d", &num);

for(int i=num; i>=1; i--){
    for(int j=num; j>=1; j--){
        if(j<=i){
            printf("%d ", i);
        } else {
            printf("%d ", j);
        }
    }
    for(int k=2; k<=num; k++){
        if(i>=k){
            printf("%d ", i);
        } else {
            printf("%d ", k);
        }
    }
    printf("\n");
}

for(int i=2; i<=num; i++){
    for(int j=num; j>=1; j--){
        if(j<=i){
            printf("%d ", i);
        } else {
            printf("%d ", j);
        }
    }
    for(int k=2; k<=num; k++){
        if(i>=k){
            printf("%d ", i);
        } else {
            printf("%d ", k);
        }
    }
    printf("\n");
} 
    
    return 0;
}
