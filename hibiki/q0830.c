#include <stdio.h>
#include <string.h>

int main(void){
  char str[256];
  int len;

  printf("Enter a char: ");
  scanf("%s", &str);

  len = strlen(str);

  printf("char length is %d\n", len);
  return 0;
}
