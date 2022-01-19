//
// Created by coolermaster on 17/01/2022.
//

#include <stdio.h>

int main(void) {
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c;
    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        }
        else if (c >= '0' && c <= '9') {
            ++digits;

        }
    }
}