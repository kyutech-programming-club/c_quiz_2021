#include <stdio.h>

int main(void){
    printf("1つ目の整数を入力してください.\n");
    int num1;
    scanf("%i", &num1);

    printf("2つ目の整数を入力してください.\n");
    int num2;
    scanf("%i", &num2);
    
    int i;
    int product = 1;
    for (i = num1; i <= num2; i++) {
        product *= i;
    }

    printf("%iから%iまでの総乗は%iです．\n", num1, num2, product);
    return 0;
}
