#include <stdio.h>

int main(void){
    printf("整数を入力してください\n");

    int num;
    scanf("%i", &num);

    int remainder = num % 2;
    printf("%i\n", remainder);

    return 0;
}
