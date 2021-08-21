#include <stdio.h>

int main(void){
    printf("整数を入力してください\n");

    int num;
    scanf("%i", &num);

    num += 1;

    printf("%i\n", num);

    return 0;
}
