#include <stdio.h>

int power(int n, int m){
    if (m == 0) {
        return 1;
    }
    else {
        int num = 1;
        int i;
        for (i = 1; i <= m; i++) {
            num *= n;
        }
        return num;
    }
}

int main(void){
    int n, m;
    printf("整数nを入力してください。\n");
    scanf("%i", &n);
    printf("累乗mを入力してください。\n");
    scanf("%i", &m);
    
    printf("%iの%i乗は%i\n", n, m, power(n, m));
    
    return 0;
}
