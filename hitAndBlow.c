#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
     printf("***数宛てゲーム***\n->3桁の数を当ててください。\n>");
     
     typedef char String[1024];
     int answer[3];
     String input[3];
     srand((unsigned)time(0UL));

     // ランダムな3桁
     for (int i = 0; i < 3; i++){
         answer[i] = rand() % 9;
     }
     for (int i = 0; i < 3; i++){
         scanf("%s", input[i]);
         printf(">");
     }
     
     int hitcount = 0;
     int blow = 0;
     for (int i = 0; i < 3; i++){
            
     }

     // デバッグ
     printf("%d%d%d\n",answer[0],answer[1],answer[2]);
}
