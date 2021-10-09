#include <stdio.h>

void scanvec(int a[3]) {
  for (int i = 0; i < 3; i++) {
    scanf("%d", &a[i]);
  }
}

int main(void) {
  int x[3], y[3], crossPro[3];

  printf("Enter two vector with three dimensions.\n");
  scanvec(x);
  scanvec(y);

  crossPro[0] = x[1]*y[2] - x[2]*y[1];
  crossPro[1] = x[2]*y[0] - x[0]*y[2];
  crossPro[2] = x[0]*y[1] - x[1]*y[3];

  printf("Cross product is ");
  for (int i = 0 ; i < 3; i++) {
    printf("%d ", crossPro[i]);
  }
  return 0;
}
