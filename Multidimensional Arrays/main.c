//
//  main.c
//  Multidimensional Arrays
//
//  Created by Ahmed Harbi on 17/11/2021.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    int matrix[5][4];
    /*matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[0][3] = 4;
    
    matrix[1][0] = 5;
    matrix[1][1] = 6;
    matrix[1][2] = 7;
    matrix[1][3] = 8;
    
    matrix[2][0] = 9;
    matrix[2][1] = 10;
    matrix[2][2] = 11;
    matrix[2][3] = 12;
    
    matrix[3][0] = 13;
    matrix[3][1] = 14;
    matrix[3][2] = 15;
    matrix[3][3] = 16;
    
    matrix[4][0] = 17;
    matrix[4][1] = 18;
    matrix[4][2] = 19;
    matrix[4][3] = 20;*/
    
    int row, col;
    int i = 1;
    for (row = 0; row < 4; row++) {
        for (col = 0 ; col < 4; col++) {
            matrix[row][col] = i;
            printf("%d\t", matrix[row][col]);
            i++;
        }
        printf("\n");
    }
    
    return 0;
}
