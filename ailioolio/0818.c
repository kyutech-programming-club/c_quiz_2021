#include <stdio.h>

int main(void)
{
	printf("偶数と奇数の出力\n");
	int data, result;
	scanf("%d", &data);
	// 	if (data % 2 == 0)
	// 		printf("%d", 0);
	// 	else if (data % 2 == 1)
	// 		printf("%d", 1);

	result = data % 2;
	printf("%d\n", result);
	return 0;
}
