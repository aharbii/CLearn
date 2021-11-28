/******************************************************************
 * File: probrlem_2.c
 * 
 * Description : Write a C program which reads two numbers “base”
 *               and “expo” , and calculate the power of base to
 *               the expo and print the result.
 *               
 *               - Note that: 
 *       power(base,expo) = base * base * base .... base expo times.
 * 
 *               - Sample Input : base = 5 , expo = 2
 *               - Sample Output: Power(base,expo) = 25
 * 
 *               - Note: Do this task in two different ways (The 
 *                 first way is with the pow function predefined in 
 *                 the math.h header file , and the second way is by
 *                 creating your own power function).
 * 
 * Author: Ahmed Harbi
 * Date:   November 2021
 * 
********************************************************************/

#include <stdio.h>
#include <math.h>
#include "problem_2.h"

int main() {

    int base, expo;
    printf("base = ");
    scanf("%i", &base);
    printf("expo = ");
    scanf("%i", &expo);

    int math_power, def_power;
    
    math_power = pow(base, expo);
    printf("Power from math header = %i\n", math_power);

    def_power = cacl_power(base, expo);
    printf("Power from defined function = %i\n", def_power);
    
    return 0;

}



int cacl_power(int base, int expo) {
    int power = 1, i;
    for (i = 0; i < expo; i++)
    {
        power *= base;
    }
    
    return power;
}
