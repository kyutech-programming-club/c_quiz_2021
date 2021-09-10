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
  int a, b;
  for (i = 0; i < 3; i++) {
    a = (i + 1) % 3;
    b = (i + 2) % 3;
    v_product[i] = x[a] * y[b] - x[b] * y[a];
  }

  printf("外積は>");
  for (i = 0; i < 3; i++) {
    printf("%3d", v_product[i]);
  }
  printf("\n");

  return 0;
}
