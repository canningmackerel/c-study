#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
     srand((unsigned)time(0UL));
     enum {
         FIRE,
         WATER,
         WIND,
         EARTH
     };

    int gems[10] = {};
     for (int i = 0; i < 10; i++){
         int gemType = rand() % 4;
         switch (gemType) {
            case FIRE:
                printf("$");
                break;
            case WATER:
                printf("*");
                break;
            case WIND:
                printf("@");
                break;
            case EARTH:
                printf("#");
                break;
        }
     }

     printf(" ");
     exit(1);
}
