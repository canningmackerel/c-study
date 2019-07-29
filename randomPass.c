#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomPass();

int main(void){
    srand((unsigned)time(0UL));

    int a = randomPass();
    int b = randomPass();
    int c = randomPass();
    int d = randomPass();
    printf("%d%d%d%d\n",a,b,c,d);
    exit(1);
}

int randomPass(){
     return rand() % 10;
}


