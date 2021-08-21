#include <stdio.h>

int main(void)
{

  double height, weight;
  printf("身長[m]：");
  scanf("%lf", &height);
  printf("体重[kg]：");
  scanf("%lf", &weight);
  double bmi = weight / (height * height);

  if (bmi < 18.5)
  {
    printf("瘦せ型\n");
  }
  else if (bmi < 25.0)
  {
    printf("普通\n");
  }
  else
  {
    printf("肥満\n");
  }

  return 0;
}
