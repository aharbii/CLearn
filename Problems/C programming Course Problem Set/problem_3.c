/******************************************************************************
 * File: problem_3.c
 * Description:  Write a C program which Reads an integer N from the standard 
 *               input. N is the size of the array arr. Fill array arr with N
 *               integers (from standard input).
 *               Print out the numbers of arr and their maximum.
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
 *****************************************************************************/

#include <stdio.h>
#include "problem.h"

int main() {

    int size;
    printf("Size of array = ");
    scanf("%i", &size);

    int numbers[size];
    for (int i = 0; i < size; i++) {
        int number;
        printf("number[%i] = ", i);
        scanf("%i", &number);
        numbers[i] = number;
    }
    
    print_array(numbers, size);

    int maximum = get_maximum(numbers, size);
    printf("Maximum = %i\n", maximum);

    return 0;
}

void print_array(int * array, int size) {
    
    printf("Printting Array: \n");
    for (int i = 0; i < size; i++) {
        if ((i % 5 == 0) && (i != 0)) {
            printf("\n");
        }
        if ((size - i) == 1) {
            printf("%i", array[i]);
        }
        else {
            printf("%i, ", array[i]);
        }
    }
    printf("\n");
}

int get_maximum(int * array, int size) {
    int maximum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }

    return maximum;
}