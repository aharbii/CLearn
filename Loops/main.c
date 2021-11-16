//
//  main.c
//  Loops
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

int main() {
    // insert code here...
    int i;
    for (i = 0; i < 10; i++) {
        printf("Hello %d\n", i);
    }
    
    int j = 0;
    while (j < 10) {
        
        printf("While Hello %d\n", j);
        j++;
    }
    
    int k = 0;
    do {
        printf("do Hello %d\n", k);
        k++;
    } while (k < 10);
    return 0;
}
