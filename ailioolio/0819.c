#include<stdio.h>


int main(void){
	

	printf("二つの整数、割り切れるかどうか\n");

	int x, y,result;
	scanf("%d%d",&x,&y);
	
	result = x % y ;

	if (result == 0){
		printf("Y\n");
	}
	else {
		printf("N\n");
	}
	return 0;
}
