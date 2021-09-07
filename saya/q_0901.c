#include <stdio.h>

int main(void){
  printf("ベクトルXを入力してください.\n");
  int x[3];
  int i;
  for (i = 0; i < 3; i++) {
    scanf("%i", &x[i]);
  }

  printf("ベクトルYを入力してください.\n");
  int y[3];
  for (i = 0; i < 3; i++) {
    scanf("%i", &y[i]);
  }

  int v_product[3];
  v_product[0] = x[1] * y[2] - x[2] * y[1];
  v_product[1] = x[2] * y[0] - x[0] * y[2];
  v_product[2] = x[0] * y[1] - x[1] * y[0];

  printf("外積は>");
  for (i = 0; i < 3; i++) {
    printf("%3d", v_product[i]);
  }
  printf("\n");

  return 0;
}