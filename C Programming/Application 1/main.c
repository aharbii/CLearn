//
//  main.c
//  Application 1
//
//  Created by Ahmed Harbi on 17/11/2021.
//

#include <stdio.h>

double sum(double array[100], int length) {
    int index;
    double result = 0;
    for (index = 0; index < length; index++) {
        result += array[index];
    }
    return result;
}

int get_values(double arr[]) {
    int n;
    printf("Enter length of your array: ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        printf("Arr[%d] = ... ", i);
        scanf("%lf", &arr[i]);
    }
    return n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //double values[10] = {10.2, 11.5, 3.5, 1, 9, 12, -2.6, 0, 5.9, 12.3};
    double values[100];
    int n = get_values(values);
    printf("Sum of your array = %lf\n", sum(values, n));
    return 0;
}
