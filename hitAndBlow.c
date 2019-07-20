#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
     printf("***数宛てゲーム***\n>3桁の数を当ててください。\n\n");
     
     typedef char String[1024];
     int answer[3];
     String input[3];
     srand((unsigned)time(0UL));

     // ランダムな3桁
     for (int i = 0; i < 3; i++){
         answer[i] = rand() % 9;
     }

     // 入力受付処理
     char *errptr;
     int inputcheck;
     for (int i = 0; i < 3; i++){
         printf(">");
         printf("%d桁目？ >", i + 1);
         scanf("%s", input[i]);
         // atoiはエラー処理できない。
         inputcheck = strtol(input[i], &errptr, 10);
         if (*errptr != 0){
             printf("error ! not number : %s\n", errptr);
             exit(1);
         }
     }
     
     // ヒット＆ブロー集計処理
     int hitcount = 0;
     int blow = 0;
     for (int i = 0; i < 3; i++){
     }

     // デバッグ
     printf("%d%d%d\n",answer[0],answer[1],answer[2]);
}
