#include <stdio.h>
#include <math.h>

int to_oct(int n) {
  int res = 0;
  for (int i = 0; n != 0; i++) {
    res += (n % 8) * pow(10, i);
    n /= 8;
  }
  return res;
}

int not_into_seven(int dec, int oct) {
  for (int i = 0; dec != 0 || oct != 0; i++) {
    if (dec % 10 == 7 || oct % 10 == 7) {
      return 0;
    }
    dec /= 10;
    oct /= 10;
  }
  return 1;
}

int main(void) {
  int N;
  scanf("%i", &N);

  int count = 0;
  for (int i = 1; i <= N; i++) {
    if (not_into_seven(i, to_oct(i))) {
      count++;
    }
  }

  printf("%i\n", count);

  return 0;
}

