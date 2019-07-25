#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);

int main(void) {
   int inputYear = 2100;

   bool isLeap = isLeapYear(inputYear);

   printf("%d年は%s\n", inputYear, isLeap ? "うるう年" : " うるう年ではない");
}

bool isLeapYear(int year) {
     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
         return true;
     }

     return false;
}
