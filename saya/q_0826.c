#include <stdio.h>

int main(void){
	printf("整数を入力してください．\n");
	int num;
	scanf("%i", &num);

	int i;
	int sum = 0;
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}

	printf("%iの約数の総和は%iです．\n", num, sum);

    return 0;
}
