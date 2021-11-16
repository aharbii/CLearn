//
//  main.c
//  Pointers
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

int main() {
    // Pointers refer to the address of the variable >> variable refers to its value.
    // Adress symbol is &
    // Value symbol is *
    int a = 5;
    int * p;
    p = &a;
    *p = 7;
    
    int arr[10];
    int *arr;
    printf("%i\n", a);
    return 0;
}
