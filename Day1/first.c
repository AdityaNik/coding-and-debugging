#include <stdio.h>
#include <stdlib.h>
int x = 0;

void double_value() {
  x = x * 2;
}

void half_value() {
  x = x / 2;
}

int main() {
  int ar[] = {1, 2, 3, 4, 5};
  int sum = 0;
  int n = 5;

  for(int i = 0; i < n; i++) {
    sum += ar[i];
  }
  printf("Sum is: %d", sum);
  printf("calling function: \n");

  int a = 10;
  double_value();
  half_value();
}
