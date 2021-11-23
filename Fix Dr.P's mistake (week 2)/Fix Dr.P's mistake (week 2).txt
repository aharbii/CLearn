//
//  main.c
//  Fix Dr.P's mistake (week 2)
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include<stdio.h>
#define PI 3.14159

int main() {
    double radius;
    printf("Enter radius:");
    scanf("%lf", &radius);
    printf("volume is : %lf \n\n", 4 *radius*radius*radius/3 );
    return 0;
}
