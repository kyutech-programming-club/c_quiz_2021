#include <stdio.h>

int str_len(char *str) {
  int res;

  for (res = 0; str[res] != '\0'; res++) {
    ;
  }

  return res;
}

int str_eql(char *s1, char *s2) {
  if (str_len(s1) != str_len(s2)) {
    return 0;
  }

  for (int i = 0; s1[i] != '\0'; i++) {
    if (s1[i] != s2[i]) {
      return 0;
    }
  }

  return 1;
}

int main(void) {
  printf("input 2 strings:\n");
  char s1[256], s2[256];
  scanf("%s", s1);
  scanf("%s", s2);

  printf("is_equal: %i\n", str_eql(s1, s2));

  return 0;
}

