#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and =0, max_or=0, max_xor=0, and, or, xor, i, j;
  
  for (i = 1; i < n; i++)
  {
      for (j= i+1 ; j <= n; j++)
      {
          and = i & j;
          or = i | j;
          xor = i ^ j;
          
          if ((and > max_and) && (and < k))
              max_and = and;
          if ((or > max_or) && (or < k))
              max_or = or;
          if ((xor > max_xor) && (xor < k))
              max_xor = xor;
        }
  }
  printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
