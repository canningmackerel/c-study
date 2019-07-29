#include <stdio.h>
#include <string.h>

int main(void) {
     int a[4] = {1, 2, 3, 4};
     int b[4];

     // これはダメ
     // b = a;
     memcpy(b, a, 16);
     printf("%d\n", b[0]);
}
