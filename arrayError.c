#include <stdio.h>

int main(void) {
     char ary[3] = {'A', 'B', 'C'};
     char cptgt[3];
    
     /* これはダメ */
     // cptgt = ary;
     for (int i = 0; i < 3; i++) {
         cptgt[i] = ary[i];
     }

     /* やるならこう */
     for (int i = 0; i < 3; i++) {
         printf("%c", cptgt[i]);
     }
}
