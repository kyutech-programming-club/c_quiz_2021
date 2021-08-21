#include <stdio.h>

int main(void){
    printf("整数を入力してください\n");

    int num;
    scanf("%i", &num);

    int count = num % 2;
    printf("%i\n", count);

    return 0;
}
