//
//  main.c
//  Circle
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>
#define PI 3.14159

double get_area(double r) {
    double a = PI * r * r;
    return a;
}

int main() {
    // insert code here...
    double radius;
    printf("Enter the radius of the circle in cm:     ");
    scanf("%lf", &radius);
    printf("The area of the circle = %lf cm^2.\n", get_area(radius));
    return 0;
}
