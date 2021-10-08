#include <stdio.h>

void scanvec(int a[3]) {
  for (int i = 0; i < 3; i++) {
    scanf("%d", &a[i]);
  }
}

int main(void) {
  int x[3], y[3], innerPro=0;

  printf("Enter two vector with three dimensions.\n");
  scanvec(x);
  scanvec(y);

  for (int j = 0; j < 3; j++) {
    innerPro += x[j] * y[j];
  }

  printf("Inner product is %d\n", innerPro);
  return 0;
}
