#include <stdio.h>

int main() {

int setNumber1[10]; // This declare the setNumber1 array

int setNumber2[9]; // This declare the setNumber2 array

// This input numbers into setNumber1 array

printf("Enter 10 numbers:\n");

for (int i = 0; i < 10; i++) {

scanf("%d", &setNumber1[i]);

}

// This calculate setNumber2 based on the addition of two consecutive elements of setNumber1
for (int i = 0; i < 9; i++) {

setNumber2[i] = setNumber1[i] + setNumber1[i+1];

}

// This print the arrays

printf("setNumber1: ");

for (int i = 0; i < 10; i++) {

printf("%d ", setNumber1[i]);

}

printf("\n");

printf("setNumber2: ");

for (int i = 0; i < 9; i++) {

printf("%d ", setNumber2[i]);

}

printf("\n");

return 0;

}
