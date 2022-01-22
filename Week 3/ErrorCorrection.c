//
// Created by coolermaster on 21/01/2022.
//

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

#define PI 3.14159265


int main(void)
{
    double interval;
    int i;
    for (i = 0; i <30; i++)
    {
        interval = i/10.0;
        printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
    }


    printf("\n+++++++\n");
    return 0;
}