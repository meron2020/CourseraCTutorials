//
// Created by coolermaster on 17/01/2022.
//

#include <stdio.h>

int main(void) {
    int outside, weather;
    printf("\nEnter if outside 1 true 0 false:");
    scanf("%d", &outside);
    printf("\nEnter if rain 1 true 0 false:");
    scanf("%d", &weather);
    if (outside && weather) {
        printf("\nPlease use an umbrella.\n");
    } else {
        printf("\nDress normally.\n");
    }
    return 0;
}