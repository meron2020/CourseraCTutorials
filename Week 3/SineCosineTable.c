//
// Created by coolermaster on 21/01/2022.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    double interval;
    printf("\t\tsine\t\tcosine\n");
    for (int i = 0; i < 30; i++) {
        interval = i / 10.0;
        printf("%lf\t %lf\t%lf\n", interval, sin(interval), cos(interval));
    }

    return 0;
}
