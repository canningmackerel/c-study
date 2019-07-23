#include <stdio.h>
#include <stdlib.h>

struct testStructA {
     int a;
};

typedef struct {
     int b;
} testStructB;

struct testStructA testFuncA (struct testStructA argA);
testStructB testFuncB (testStructB argB);

void main(void) {
     struct testStructA a = {
         .a = 10
     };
     testStructB b = {
         .b = 20
     };

     a = testFuncA(a);
     b = testFuncB(b);

     printf("%d%d\n", a.a, b.b);
     exit(1);
}

struct testStructA testFuncA (struct testStructA argA) {
     argA.a+=10;
     return argA;
}

testStructB testFuncB (testStructB argB) {
     argB.b+=10;
     return argB;
}
