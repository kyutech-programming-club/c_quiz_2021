#include <stdio.h>
#include <string.h>

int main(void) {
  char N[200010];
  scanf("%s", N);

  int len = strlen(N);
  int sum = 0;

  for (int i = 0; i < len; i++) {
    sum += N[i] - '0';
  }

  if (sum % 9 == 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}

