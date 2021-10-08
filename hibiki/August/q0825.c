#include <stdio.h>
#include <string.h>

int main(void) {
  // ちょっと配列であそんだんご
  // char FizzBuzz[4][8] = {"FizzBuzz", "Fizz", "Buzz", "\0"};
  // char judge[8];

  // for (int i = 1; i <= 100; i++) {
  //   if (i % 15 == 0) {
  //     strcpy(judge, FizzBuzz[0]);
  //   } else if (i % 3 == 0) {
  //     strcpy(judge, FizzBuzz[1]);
  //   } else if (i % 5 == 0) {
  //     strcpy(judge, FizzBuzz[2]);
  //   } else {
  //     strcpy(judge, FizzBuzz[3]);
  //   }
  //   printf("%d: %s\n", i, judge);
  // }

  for (int i = 1; i <= 100; i++) {
    if (i % 15 == 0) {
      printf("FizzBuzz\n");
    } else if (i % 3 == 0) {
      printf("Fizz\n");
    } else if (i % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
  
  return 0;
}
