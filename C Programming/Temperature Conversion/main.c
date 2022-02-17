//
//  main.c
//  Temperature Conversion
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

float get_cel(float f) {
    float c = (f - 32) / 1.8;
    return c;
}

int main() {
    // insert code here...
    float fehrenheit;
    printf("Temperature in Fahernheit = ... ");
    scanf("%f", &fehrenheit);
    printf("Temperature in Celsius = %fC\n", get_cel(fehrenheit));
    return 0;
}
