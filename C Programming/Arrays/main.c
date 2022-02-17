//
//  main.c
//  Arrays
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

int main() {
    // insert code here...
    int arr[10] = {3, 4, 2, 7, 8, 1, 0, 3, 4, 2};
    int i;
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
    
    char arrc[10] = {'a', 'b', 'h', 'z', 'k', 'i', 'x', 'y', 't', 'l'};
    int j;
    for (j = 0; j < 10; j++) {
        printf("%c ", arrc[j]);
    }
    putchar('\n');
    return 0;
}
