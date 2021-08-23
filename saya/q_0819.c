#include <stdio.h>

int main(void){
    printf("1つ目の整数を入力してください.\n");
    int num1;
    scanf("%i", &num1);

    printf("2つ目の整数を0以外で入力してください.\n");
    int num2;
    scanf("%i", &num2);

    if (num1 % num2 == 0) {
        printf("Y\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}
