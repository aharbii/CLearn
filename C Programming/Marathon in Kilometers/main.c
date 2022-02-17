//
//  main.c
//  Marathon in Kilometers
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

double metric_conversion(double mi, double y) {
    mi += y * 0.000568182;
    double km = (mi / (0.00062137)) / 1000;
    return km;
}

int main() {
    // insert code here...
    double miles, yards;
    printf("miles = ... ");
    scanf("%lf", &miles);
    printf("yards = ... ");
    scanf("%lf", &yards);
    printf("kilometers = %lf km.\n", metric_conversion(miles, yards));
    return 0;
}
