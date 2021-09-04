#include <stdio.h>

void scanVec(int Vec[3]) {
  for (int i = 0; i < 3; i++) {
    scanf("%i", &Vec[i]);
  }
}

void printVec(int Vec[3]) {
  printf("Vec: ");

  for (int i = 0; i < 3; i++) {
    printf("%i ", Vec[i]);
  }

  printf("\n");
}

int main(void) {
  printf("入力せよ: X(?, ?, ?), Y(?, ?, ?)\n");

  int X[3], Y[3];
  int n = 3;
  scanVec(X);
  scanVec(Y);

  int cross_product[3];

  for (int i = 0; i < n; i++) {
    int i_1 = (i + 1) % n;
    int i_2 = (i + 2) % n;

    cross_product[i] = X[i_1] * Y[i_2] - Y[i_1] * X[i_2];
  }

  printVec(cross_product);

  return 0;
}

