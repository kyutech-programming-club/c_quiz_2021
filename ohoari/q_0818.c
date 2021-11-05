#include <stdio.h>

int main(void){
    int num;
    
    printf("pleasenumber = ");
    scanf("%d",&num);

    if ( num % 2 == 0){
        printf("0\n", num);
    } else {
        printf("1\n", num);
    }
}
    

