#include <stdio.h>
#include <math.h>

int main(void)
{

	printf("球体の体積\n");
	double result;
	int r;
	scanf("%d", &r);
	double d = pow(r, 3.0);

	result = 4 * 3.14 * d / 3;
	printf("%f\n", result);

	return 0;
}

//よくがんばりました
