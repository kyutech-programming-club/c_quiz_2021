#include <stdio.h>

void scanVec(int Vec[3]) {
  for (int i = 0; i < 3; i++) {
    scanf("%i", &Vec[i]);
  }
}

int main(void) {
  printf("入力せよ: X(?, ?, ?), Y(?, ?, ?)\n");

  int X[3], Y[3];
  scanVec(X);
  scanVec(Y);

  int innner_product = 0;

  for (int i = 0; i < 3; i++) {
    innner_product += X[i] * Y[i];
  }

  printf("内積は%iです。\n", innner_product);
  
  return 0;
}

