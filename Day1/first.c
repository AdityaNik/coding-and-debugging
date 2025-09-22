#include <stdio.h>
#include <stdlib.h>

// C passes arguments by value & uses pointers to change of variable
int duble_value(int *x) {
  *x = *x * 2;
}

int half_value(int x) {
  x = x / 2;
}

int main() {
  int ar[] = {1, 2, 3, 4, 5};
  int sum = 0;
  int n = 5;

  for(int i = 0; i < n; i++) {
    sum += ar[i];
  }
  printf("Sum is: %d": sum);

  printf("calling function: \n");
  mathFunction();


  int a = 10;
  double_value(&a);
  half_value(a);
}
