#include <stdio.h>
#include <stdlib.h>

void takestr(char *str);

void main(void) {
     takestr("hello");
     exit(1);
}

void takestr(char *str) {
     printf("%s\n", str);
}


