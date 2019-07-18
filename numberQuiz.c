#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
     printf("***数宛てゲーム***\n->3桁の数を当ててください。");
     
     int answer[3];
     int input[3];
     srand((unsigned)time(0UL));

     // 1桁目は例外
     answer[0] = rand () % 8 + 1;
     for (int i = 1; i < 3; i++){
         answer[i] = rand() % 9;
     }

     // デバッグ
     printf("%d%d%d\n",answer[0],answer[1],answer[2]);
}
