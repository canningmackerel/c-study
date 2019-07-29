#include <stdio.h>

int main(void){
    printf("char is %d byte\n", (int)(sizeof(char)));
    printf("short is %d byte\n", (int)(sizeof(short)));
    printf("int is %d byte\n", (int)(sizeof(int)));
    printf("long is %d byte\n", (int)(sizeof(long)));
}
