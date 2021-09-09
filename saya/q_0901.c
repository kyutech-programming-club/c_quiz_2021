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
  for (i = 0; i < 3; i++) {
      v_product[i] = x[(i + 1) % 3] * y[(i + 2) % 3] - x[(i + 2) % 3] * y[(i + 1) % 3];
  }

  printf("外積は>");
  for (i = 0; i < 3; i++) {
    printf("%3d", v_product[i]);
  }
  printf("\n");

  return 0;
}
