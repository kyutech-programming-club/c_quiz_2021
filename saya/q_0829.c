#include <stdio.h>

int main(void){
    printf("整数を入力してください。\n");

    int num[3];
    int reverse[3];
    int i;
    for (i = 0; i < 3; i++) {
        scanf("%i", &num[i]);
        printf("num[%i] = %i\n", i, num[i]);  //入力確認用
    }

    printf("逆順にすると");
    for (i = 0; i < 3; i++) {
        reverse[i] = num[2 - i];
        printf("%i", reverse[i]);
    }
    printf("\n");
    
    return 0;
}
