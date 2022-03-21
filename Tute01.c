/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2;
  float average=0;

  printf("Enter marks for subject 1 :");
  scanf("%d",&sub1);

  printf("/nEnter marks for subject 2 :");
  scanf("%d",&sub2);

  average=(sub1+sub2)/2.0;
  printf("/nAverage is = %d",&average);
  
  
  
  return 0;
}

