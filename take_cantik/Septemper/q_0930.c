#include <stdio.h>
#include <stdlib.h>

void p(char s) {
  printf("%c\n", s);
}

void p_ans(int a, int b) {
  if (a > b) {
    p('>');
  } else if (a < b) {
    p('<');
  } else {
    p('=');
  }
}

int main(void) {
  int A, B, C;
  scanf("%i %i %i", &A, &B, &C);

  if (C % 2) {
    p_ans(A, B);
  } else {
    p_ans(abs(A), abs(B));
  }
  
  return 0;
}

