#include <stdio.h>

int main(void){
    printf("身長[m]を入力してください.\n");
    double hei;
    scanf("%lf", &hei);

    printf("体重[kg]を入力してください.\n");
    double wei;
    scanf("%lf", &wei);
    
    double bmi;
    bmi = wei / (hei * hei);

    if (bmi < 18.5) {
        printf("痩せ型\n");
    }
    else if (bmi < 25) {
        printf("普通\n");
    }
    else {
        printf("肥満\n");
    }

    return 0;
}
