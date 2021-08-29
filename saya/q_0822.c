#include <stdio.h>

int main(void){
    printf("1つ目の整数を入力してください.\n");
    int num1;
    scanf("%i", &num1);

    printf("2つ目の整数を入力してください.\n");
    int num2;
    scanf("%i", &num2);
    
    int i;
    int sum = 0;
    for (i = num1; i <= num2; i++) {
        sum += i;
    }

    printf("%iから%iまでの総和は%iです．\n", num1, num2, sum);
    return 0;
}
