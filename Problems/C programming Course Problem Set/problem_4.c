/******************************************************************************
 * File: problem_4.c
 * Description:  Write a C program which reads two numbers n and p from the
 *               standard input (Keyboard) and calculate the number of 
 *               combinations we can make from n if you chose p, and then
 *               print it on screen.
 * 
 *               Comb(n, p) = factorial(n) / ((factorialp) * factorial(n-p))
 * 
 *               - Sample Input: n = 5, p = 2
 *               - Sample Output: Comb(5, 2) = 10
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
 *****************************************************************************/

#include <stdio.h>
#include "problem.h"

int main() {
    int n, p;
    printf("N = ");
    scanf("%i", &n);

    printf("P = ");
    scanf("%i", &p);

    float comb;
    comb = combinations(n, p);
    printf("Combinations = %.2f\n", comb);
    return 0;
}

float combinations(int n, int p) {
    float comb = factorial(n) / ((factorial(p) * factorial(n-p)));
    return comb;
}

double factorial(int n) {
    double fact = 1;
    for (int i = n; i > 0; i--) {
        fact *= i;
    }

    return fact;
}