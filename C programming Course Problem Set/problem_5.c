/******************************************************************************
 * File: problem_5.c
 * Description:  Write a C function which takes a real number x and return the
 *               value if e^x
 * 
 *               - Note that: e^x = (x^i) / factorial(i) + ....  -inf < x < int
 *                            the error must be less than 0.001
 * 
 *               - Sample Input: x = 4
 *               - Sample Output: e^4 = 54.5981500331
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
 *****************************************************************************/

#include <stdio.h>
#include "problem.h"

int main() {
    int x;
    printf("X = ");
    scanf("%i", &x);

    double e = expo(x);
    
    printf("%.10lf\n", e);

}

double factorial(int n) {
    double fact = 1;
    for (int i = n; i > 0; i--) {
        fact *= i;
    }
    
    return fact;
}

double calc_power(int base, int expo) {
    double power = 1;
    for (int i = 0; i < expo; i++)
    {
        power *= base;
    }
    
    return power;
}

double expo (int x) {
    double e = 0;
    for (int i = 0; i < (x + 100); i++) {

        e += (calc_power(x, i) / factorial(i));

    }
    return e;
}