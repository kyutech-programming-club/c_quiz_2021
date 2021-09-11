#include <stdio.h>

int min_list(int List[110][110], int H, int W) {
  int min = 101;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (min > List[i][j]) {
        min = List[i][j];
      }
    }
  }

  return min;
}

int main(void) {
  int H, W;
  scanf("%i %i", &H, &W);

  int A[110][110];
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      scanf("%i", &A[i][j]);
    }
  }

  int min_num = min_list(A, H, W);
  int sum = 0;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      sum += (A[i][j] - min_num);
    }
  }

  printf("%i\n", sum);

  return 0;
}

