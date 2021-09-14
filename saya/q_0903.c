#include <stdio.h>

int power(int n, int m){
    int num = 1;
    for (int i = 0; i < m; i++) {
        num *= n;
    }
    
    return num;
}

int main(void){
    int n;
    int m = 5;
    printf("整数nを入力してください。\n");
    scanf("%i", &n);
    
    int ans_1 = 0;
    for (int i = 1; i <= n; i++) {
        ans_1 += power(i, m);
    }
    
    int ans_2 = n*n * (n+1)*(n+1) * (2*n*n + 2*n - 1) / 12;

    printf("ans_1 = %d\nans_2 = %d\n", ans_1, ans_2); //確認用

    if (ans_1 == ans_2) {
        printf("n=%d >> success", n);
    }
    else {
        printf("n=%d >> miss", n);
    }
    
    return 0;
}
