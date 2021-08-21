#include <stdio.h>
int main(void){
    int res;
    printf("整数を入力してください\n");
    scanf("%d",&res);
    res += 1;
    printf("%d\n",res);
    return 0;
}