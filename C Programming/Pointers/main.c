//
//  main.c
//  Pointers
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Pointers refer to the address of the variable >> variable refers to its value.
    // Value symbol is *
    int* b;
    b = (int*)malloc(sizeof(int));
    *b = 7;
    printf("%d\n", *b);
    return 0;
}
