#include <stdio.h>

int factorial (int x) {
  int factorial_helper (int a, int b) {
    if (a < 1) {
      return b;
    } else {
      return factorial_helper ((a - 1), (a * b));
    }
  }
  return factorial_helper(x, 1);
}

int main() {
    int arr[4] = {0};
    printf("%d", factorial(5));

    return 0;
}
