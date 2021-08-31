#include <stdio.h>

int main(void){
    printf("整数を入力してください．\n");
	int num;
	scanf("%i", &num);

    int div_count = 0;  //div = divisor
    int max_div_count = 0;
    int final;
    int i, j;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                div_count += 1;
            }
        }
        if (max_div_count <= div_count) {
            max_div_count = div_count;
            final = i;
        }
        div_count = 0;
	}

    printf("%i以下の整数の内、最も約数の多い数は%i.\n", num, final);

    return 0;
}
