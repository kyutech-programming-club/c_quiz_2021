#include <stdio.h>

int main(void) {
  double height, weight, bmi;

  printf("Enter your height[m]: ");
  scanf("%lf", &height);
  printf("Enter your weight[kg]: ");
  scanf("%lf", &weight);

  bmi = weight / (height * height);
  printf("your BMI is %f.\n", bmi);

  if (bmi < 18.5){
    printf("Skinny");
  } else if (bmi > 25) {
    printf("Obesity");
  } else {
    printf("Normal");
  }

  return 0;
}
