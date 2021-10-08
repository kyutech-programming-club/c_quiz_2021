#include <stdio.h>

int main(void) {
  int num, maxnum, maxcount=0, count;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    count = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        count++;
      }
    }
    // printf("num:%d count:%d\n", i, count);

    if (count >= maxcount) {
      maxcount = count;
      maxnum = i;
    }
  }

  printf("Most diviable number is %d\n", maxnum);
  return 0;
}
