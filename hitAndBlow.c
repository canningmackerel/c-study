#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

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
     //printf("%d%d%d\n",answer[0],answer[1],answer[2]);

     while (true){
         // 入力受付処理
         char *errptr;
         int inputcheck;
         for (int i = 2; 0 <= i; i--){
             // 「123」とあったら、1桁目は3だから、配列を通常の逆順で回す。
             printf(">");
             printf("%d桁目？ >", 3 - i);
             scanf("%s", &inputstring);
             // 入力チェック 
             // 一時変数は配列ではなくアドレス演算子で渡す。
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
    
         // デバッグ
         //printf("%d%d%d\n",inputnumbers[0],inputnumbers[1],inputnumbers[2]);
         
         // ヒット＆ブロー集計処理
         int hitcount = 0;
         int blowcount = 0;
         for (int i = 2; 0 <= i; i--){
            for (int j = 2; 0 <= j; j--){
                 if (i == j && inputnumbers[i] == answer[j]){
                     hitcount+=1;
                     continue;
                 } else if (inputnumbers[i] == answer[j]){
                     blowcount+=1;
                 }
            } 
        }
        printf("入力した数字：%d%d%d／ヒット：%d／ブロー：%d\n", inputnumbers[0], inputnumbers[1], inputnumbers[2], hitcount, blowcount);
    
        // ゲーム続行確認
        printf("continue ? : Yes(1)/No(0)");
        scanf("%s", &inputstring);
        inputcheck = strtol(inputstring, &errptr, 10);
        if (*errptr != 0 || !(inputcheck  == 0 | inputcheck == 1)) {
             printf("error\n");
             exit(1);
        } else if (inputcheck == 0){
             printf("正解は%d%d%dでした。\n", answer[0], answer[1], answer[2]);
             exit(1);
        }
    
    }
    
}
