#include <stdio.h>

int main(void) {
  int num, i;
  int ans = 0;
  int num_digit[3];
  
  printf("3桁の整数を入力してください: "); 
  scanf("%i", &num);

  num_digit[0] = num % 10;
  num_digit[2] = num / 100;
  num_digit[1] = num % 100 / 10;

  ans = num_digit[0] * 100 + num_digit[1] * 10 + num_digit[2];

  printf("%i -> %i\n", num, ans);

  return 0;
}

