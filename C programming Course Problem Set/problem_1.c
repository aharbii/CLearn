/******************************************************************************
 * File: problem_1.c
 * Description:  Write a C program which reads two numbers a and b from the 
 *               standard input (Keyboard) and swap them, and then print them
 *               back on screen.
 * 
 *               - Sample Input: a = 5 , b = 7.8
 *               - Sample Output: a = 7.8, b = 5
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
 *****************************************************************************/

#include <stdio.h>

int main() {

    float a, b, c;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;
    
    printf("a = %.2f, b = %.2f\n", a, b);

}