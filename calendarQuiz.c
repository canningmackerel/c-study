#include <stdio.h>
#include <stdlib.h>

int main(void) {
    typedef char String[1024];

    printf("カレンダーから縦に並んだ数字3つを選んで、合計を入力してください。\n");
    String sum;
    scanf("%s",sum);
    int num = (int)atoi(sum) / 3;
     
    printf("選んだ数字は%d日、%d日、%d日です。\n", num - 7, num, num + 7);
}
