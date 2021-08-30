#include <stdio.h>

int main(void) {
  double height, weight;

  scanf("%lf %lf", &height, &weight);

  double BMI = weight / (height * height);

  if (BMI < 18.5) {
    printf("slim");
  } else if (BMI < 25) {
    printf("nomal");
  } else {
    printf("fatness");
  }
  
  return 0;
}