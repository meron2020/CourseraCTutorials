//
// Created by coolermaster on 16/01/2022.
//

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double x;
    printf("Enter a number between 0 and 1 >>");

    scanf("%lf", &x);
    double val = 180/PI;
    double sinx = asin(x) * val;
    printf("%lf", sinx);
}