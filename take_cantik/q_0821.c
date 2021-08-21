#include <stdio.h>

int main(void) {
  double height, weight, bmi;
  printf("身長[m]と体重[kg]を入力してください\n");
  printf("身長[m]：");
  scanf("%lf", &height);
  printf("体重[kg]：");
  scanf("%lf", &weight);

  bmi = weight / (height * height);

  if (bmi <= 18.5 && bmi > 25) {
    printf("普通\n");
  } else if (bmi < 18.5) {
    printf("痩せ型\n");
  } else if (bmi <= 25) {
    printf("肥満\n");
  }

  return 0;
}

