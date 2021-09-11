#include <stdio.h>

void swap(int List[], int i, int j) {
  int tmp = List[i];
  List[i] = List[j];
  List[j] = tmp;
}

void sort(int List[1010], int left, int right) {
  int i = left;
  int j = right;
  int pivot = List[(left + right) / 2];

  for (;;) {
    for (; List[i] < pivot; i++) {
      ;
    }
    for (; List[j] > pivot; j--) {
      ;
    }

    if (i >= j) {
      break;
    }

    swap(List, i, j);

    if (0 < i - 1) {
      sort(List, left, i - 1);
    }
    if (j + 1 < right) {
      sort(List, j + 1, right);
    }
  }
}

int main(void) {
  int N;
  scanf("%i", &N);

  int A[1010];
  for (int i = 0; i < N; i++) {
    scanf("%i", &A[i]);
  }

  sort(A, 0, N - 1);

  for (int i = 0; i < N; i++) {
    if (A[i] != i + 1) {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");

  return 0;
}

