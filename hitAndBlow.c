#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
     printf("***数宛てゲーム***\n->3桁の数を当ててください。");
     
     int answer[3];
     int input[3];
     srand((unsigned)time(0UL));

     // ランダムな3桁
     for (int i = 0; i < 3; i++){
         answer[i] = rand() % 9;
     }

     int hitcount, blow;

     // デバッグ
     printf("%d%d%d\n",answer[0],answer[1],answer[2]);
}
