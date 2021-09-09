#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int shuffle_list[1000000];

int my_rand(int n) {
  return random() % n;
}

int *shuffle(int n) {
  for (int i = 0; i < n; i++) {
    shuffle_list[i] = i;
  }

  for (int i = 0; i < n; i++) {
    int ran_num = my_rand(n);
    int tmp = shuffle_list[i];
    shuffle_list[i] = shuffle_list[ran_num];
    shuffle_list[ran_num] = tmp;
  }

  return shuffle_list;
}

int main(void) {
  srandom(getpid());

  printf("input: ");
  int n;
  scanf("%i", &n);
  
  int *rand_list = shuffle(n);

  for (int i = 0; i < n; i++) {
    printf("%i ", rand_list[i]);
  }
  printf("\n");

  return 0;
}

