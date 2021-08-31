#include <stdio.h>

int main(void){
	printf("整数を入力してください．\n");
	int num;
	scanf("%i", &num);

    int count1 = 0;
    int count2 = 0;
    int final;
    int i, j;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count1 += 1;
            }
        }
        if (count2 <= count1) {
            count2 = count1;
            final = i;
        }
        count1 = 0;
	}

    printf("%i以下の整数の内、最も約数の多い数は%i.\n", num, final);

    return 0;
}
