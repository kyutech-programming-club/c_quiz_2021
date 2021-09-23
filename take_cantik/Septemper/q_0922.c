#include <stdio.h>
#include <string.h>

int main(void) {
  char X[210];
  scanf("%s", X);

  char *dot = strchr(X, '.'); 
  if (dot) {
    *dot = '\0';
  }

  printf("%s\n", X);
  
  return 0;
}

