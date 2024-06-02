/* 
it is a simple prblem ,  just about calculating the div and the mdoulo of the given number to show the number of hours
number of hours is the number of minutes div 60
number of minutes , is the number of minutes mod 60

*/
// here is my attempt in order to slove this problem
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int M, h, m;
  scanf("%d", &M);
  h = M / 60 ; 
  m = M % 60 ;
printf ("%dh %dm",h,m);
  return 0;
}