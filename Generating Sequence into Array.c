//Define a one-dimensional, 12-element integer array called C. 
//Assign the values 1, 4, 7, 10, …, 34 to the array elements.
#include <stdio.h>

int main() {
 int C[12];
 int i = 0;
 int product = 0;
 while (product <34) {
  product = 1+(3*i);
  C[i] = product;
  i++;
 }; 
 int j = 0; 
while (j<i) {
 if (!(C[j] ==34)) {
 printf("%d, ", C[j]);
 }
 else {
 printf("%d", C[j]);
 }
 j++;
};
 return 0;
};