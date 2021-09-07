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

  int d_product = 0;
  for (i = 0; i < 3; i++) {
    d_product += x[i] * y[i];
  }

  printf("内積は%i\n", d_product);
  
  return 0;
}
