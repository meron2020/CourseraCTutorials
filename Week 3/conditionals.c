//
// Created by coolermaster on 17/01/2022.
//

#include <stdio.h>

int main(void) {
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);
    if (speed < 65) {
        printf("\nNoe speeding Ticket\n\n");
    }
    else {
        printf("\nSpeeding Ticket\n\n");
    }
    return 0;
}