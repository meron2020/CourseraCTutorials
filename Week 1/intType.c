//
// Created by coolermaster on 16/01/2022.
//

#include <stdio.h>
int main(void) {
    short short_a = 5;
    int normal_a = 67;
    unsigned unsigned_a = 67u;
    long long_a = 67l;
    printf("short_a = %hd, divide by int 2 is %d\n", short_a, short_a/2);
    double new_double = 123e12;
    printf("%g", new_double);
}