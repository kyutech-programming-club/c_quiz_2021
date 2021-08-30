#include <stdio.h>

int main(void) {
  printf("文字入力して: ");
  
  char str[256];
  scanf("%s", str);

  int cnt;
  for (cnt = 0; str[cnt] != '\0'; cnt++) {
    ;
  } 

  printf("%i文字です！\n", cnt);

  return 0;
}

