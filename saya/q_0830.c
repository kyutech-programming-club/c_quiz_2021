#include <stdio.h>

int main(void){
    printf("文字列を入力してください.\n");
    char word[100];
    scanf("%s", word);

    int count;
    for (count = 0; word[count] != '\0'; count++);
    
    printf("word： %s\n", word);  //入力確認用
    printf("文字列の長さは「%i」です.\n", count);
    
    return 0;
}
