#include <stdio.h>
#include <string.h>

int main(void) {
     int a[4] = {1, 2, 3, 4};
     int b[4] = {1, 2, 3, 4};

     int r = memcmp(a, b, 16);

     if (r == 0) {
         printf("same\n");
     }

     // メモリの番地比較
     if (a == b) {
         printf("演算子によると等しい\n");
     }

     printf("%d\n", a);
     printf("%d\n", b);

     printf("%p\n", a);
     printf("%p\n", a);

}
