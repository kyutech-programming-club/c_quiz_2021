#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void *a, const void *b) {
  if (*(int *)a > *(int *)b) {
    return 1;
  } else if (*(int *)a < *(int *)b) {
    return -1;
  } else {
    return 0;
  }
}

int main(void) {
  int N;
  scanf("%i", &N);

  int A[1010];
  for (int i = 0; i < N; i++) {
    scanf("%i", &A[i]);
  }

  qsort(A, N, sizeof(int), cmpnum);

  for (int i = 0; i < N; i++) {
    if (A[i] != i + 1) {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");

  return 0;
}

