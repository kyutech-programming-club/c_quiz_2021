#include <stdio.h>

int main(void){
    printf("半径を入力してください.\n");
    double r;
    scanf("%lf", &r);

    double volume;
    volume = 4.0/3*3.14*r*r*r;

    printf("V = %lf\n", volume);

    return 0;
}
