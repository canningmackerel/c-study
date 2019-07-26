#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeapYear(int year);

int main(void) {
    
    char *errptr;
    char inputString[1024];

    printf("うるう年を判定します。\n入力年？：");
    scanf("%s", &inputString);
    int inputYear = strtol(inputString, &errptr, 10);
    if (*errptr != 0) {
         printf("input error\n");
         exit(1);
    }

    bool isLeap = isLeapYear(inputYear);

    printf("%d年は%s\n", inputYear, isLeap ? "うるう年" : " うるう年ではない");
}

bool isLeapYear(int year) {
     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
         return true;
     }

     return false;
}
