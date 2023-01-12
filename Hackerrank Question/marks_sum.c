#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i,sum=0;
  for(i=0;i<number_of_students;i+=2)
  {
      if(gender=='b')
      {
          sum+=marks[i];
      }
      else
      {
          sum+=marks[1+i];
      }
  }
  return sum;
}

int main() {