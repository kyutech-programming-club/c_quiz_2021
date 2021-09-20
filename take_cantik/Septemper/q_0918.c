#include <stdio.h>
#include <stdlib.h>

int H, W, N;
int A[100010], B[100010];
int C[100010], D[100010];
int len1 = 0, len2 = 0;

int cmpnum(const void *a, const void *b) {
  if (*(int *)a > *(int *)b) {
    return 1;
  } else if (*(int *)a < *(int *)b) {
    return -1;
  } else {
    return 0;
  }
}

void copy_vecs() {
  for (int i = 0; i < N; i++) {
    C[i] = A[i];
    D[i] = B[i];
  }
}

void erase_dup() {
  for (int i = 0; i < N; i++) {
    if (i == 0 || C[i] != C[i - 1]) {
      C[len1++] = C[i];
    }
    if (i == 0 || D[i] != D[i - 1]) {
      D[len2++] = D[i];
    }
  }
}

int search_C(int A_i) {
  int l = 0;
  int r = len1 - 1;

  while (l <= r) {
    int mid = (l + r) / 2;
    if (A_i == C[mid]) {
      return mid + 1;
    } else if (A_i < C[mid]) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
}

int search_D(int B_i) {
  int l = 0;
  int r = len2 - 1;

  while (l <= r) {
    int mid = (l + r) / 2;
    if (B_i == D[mid]) {
      return mid + 1;
    } else if (B_i < D[mid]) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
}

int main(void) {

  scanf("%i %i %i", &H, &W, &N);
  for (int i = 0; i < N; i++) {
    scanf("%i %i", &A[i], &B[i]);
  }


  copy_vecs();
  qsort(C, N, sizeof(int), cmpnum);
  qsort(D, N, sizeof(int), cmpnum);
  erase_dup();

  for (int i = 0; i < N; i++) {
    printf("%i %i\n", search_C(A[i]), search_D(B[i]));
  }

  return 0;
}

