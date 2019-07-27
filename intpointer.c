#include <stdio.h>

void printIntByAddress(int* num);

int main(void) {
    int a = 70;

    int *addrA = &a;
    printf("variable a address is :%p\n", addrA);
    printf("variable a value is : %d\n", *addrA);

    long addrLA = (long)&a;
    printf("variable a address conbert long type is :%d\n", addrLA);


    printIntByAddress(&a);
    printIntByAddress(addrA);

    // 以下は不可
    // int *zero = 0;
    // printf("memory address 0 - 3 is :%d\n", *zero);
    
}

void printIntByAddress(int* num) {
    printf("integer is :%d\n", *num);
}
