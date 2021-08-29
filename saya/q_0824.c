#include <stdio.h>

int main(void){
    printf("整数を入力してください.\n");
    int num;
    scanf("%i", &num);

    int dig;
    int sum = 0;
    while (num != 0) {
        dig = num % 10;
        sum += dig;
        num /= 10;
    }

    printf("各桁の総和は%iです.\n", sum);

    return 0;
}
