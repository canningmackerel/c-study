#include <stdio.h>

void printIntByAddress(int* num);

int main(void) {
    int a = 70;

    int *addrA = &a;
    printf("variable a address is :%p\n", addrA);
    printf("variable a value is : %d\n", *addrA);

    long addrLA = (long)&a;
    printf("variable a address conbert long type is :%d\n", addrLA);

    // 配列型変数はポインタ
    int b[3] = {1, 2, 3};
    printf("%p\n", b);
    // array[i]でその型のsizeメモリ上から読む。それのアドレスだから同じ。
    printf("%p\n", &b[0]);

    printf("%d\n", addrA[0]);
    printf("%d\n", *(addrA + 0));

    //printIntByAddress(&a);
    //printIntByAddress(addrA);

    // 以下は不可
    // int *zero = 0;
    // printf("memory address 0 - 3 is :%d\n", *zero);
    
}

void printIntByAddress(int* num) {
    printf("integer is :%d\n", *num);
}
