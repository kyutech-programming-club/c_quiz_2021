#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_rand(int n) {
  return random() % n;
}

float randf(void) {
  return (float)my_rand(1000000) / 1000000;
}

int main(void) {
  srandom(getpid());
  printf("%lf\n", randf());
  printf("%lf\n", randf());
  printf("%lf\n", randf());
  printf("%lf\n", randf());

  return 0;
}

