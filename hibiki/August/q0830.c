#include <stdio.h>
#include <string.h>

int main(void){
  char str[256];
  int i;

  printf("Enter a char: ");
  scanf("%s", &str);

  for (i = 0; i < 256; i++) {
    if (str[i] == '\0') {
      break;
    }
  }

  printf("char length is %d\n", i);
  return 0;
}
