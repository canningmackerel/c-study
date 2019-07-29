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

    const char GEM_CHARS[] = {'$', '*', '@', '#'};

    int gems[10] = {};
     for (int i = 0; i < 10; i++){
         int gemType = rand() % 4;
         gems[i] = gemType; 
     }

     for (int i = 0; i < 10; i++){
         printf("%c", GEM_CHARS[gems[i]]);
     }

     printf("\n");
     exit(1);
}
