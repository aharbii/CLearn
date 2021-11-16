//
//  main.c
//  Conditional_Programming
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

int main() {
    // insert code here...
    int a = 5 > 4 ? 1 : 2;
    printf("%d\n", a);
    
    switch (5) {
        case 1:
            printf("Hello, World!\n");
            break;
        case 5:
            printf("Hi, World!\n");
            break;
        case 3:
            printf("Yay, World!\n");
            break;
            
        default:
            break;
    }
    
    if (7 == 4) {
        printf("Hello!\n");
    }
    else if (7 > 4) {
        printf("Yay\n");
    }
    else {
        printf("Hi!\n");
    }
    return 0;
}
