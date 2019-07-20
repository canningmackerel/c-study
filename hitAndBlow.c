#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
     printf("***数宛てゲーム***\n>3桁の数を当ててください。\n\n");
     
     typedef char String[1024];
     int answer[3];
     String inputstring;
     int inputnumbers[3];
     srand((unsigned)time(0UL));

     // ランダムな3桁
     for (int i = 0; i < 3; i++){
         answer[i] = rand() % 9;
     }

     // デバッグ
     printf("%d%d%d\n",answer[0],answer[1],answer[2]);


     // 入力受付処理
     char *errptr;
     int inputcheck;
     for (int i = 2; 0 <= i; i--){
         printf(">");
         printf("%d桁目？ >", 3 - i);
         scanf("%s", &inputstring);
         // 入力チェック 
         inputcheck = strtol(inputstring, &errptr, 10);
         if (*errptr != 0){
             printf("error ! not number : %s\n", errptr);
             exit(1);
         } else if (inputcheck < 0 || 9 < inputcheck){
             printf("error ! input number 0-9 range : %d\n", inputcheck);
             exit(1);
         }
         inputnumbers[i] = inputcheck;
     }
     
     // ヒット＆ブロー集計処理
     int hitcount = 0;
     int blow = 0;
     for (int i = 2; 0 <= i; i--){
        if (inputnumbers[i] == answer[i]){
             hitcount+=1;
        }
        for (int j = 0; j < 3; j++){
             
        } 
    }
    printf("%d", hitcount);

}
