#include <stdio.h>

int is_prime(int num) {
    if (num == 2) {
        return 1;
    }
    else if (num % 2 == 0 || num < 2) {
        return 0;
    }
    else {
        int i;
        for (i = 3; i < num; i += 2) {
            if (num % i == 0) {
                return 0;
            }            
        }
    }
    return 1;
}

int main(void){
	printf("整数を入力してください．\n");
	int num;
	scanf("%i", &num);

    int count = 0;
    int i;
    for (i = 2; i <= num; i++) {
        if (is_prime(i)) {
            count += 1;
        }
    }

    printf("%i以下の素数は%i個あります.\n", num, count);

    return 0;
}
