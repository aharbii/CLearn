/******************************************************************************
 * File: problem_6.c
 * Description:  Write a C program which reads a text from the standard input
 *               (Keyboard) and if its length is bigger than 10 print out the
 *               the second five letters (Letter at index 5, 6, 7, 8 and 9).
 * 
 *               - Sample Input: Abcdefghijklmnop
 *               - Sample Output: fghij
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
*****************************************************************************/

#include <stdio.h>

int main() {
    char text[100];
    printf("Enter text: ");
    scanf("%s", &text);
    if (text[9]) {
        for (int i = 5 ; i < 10; i++){
            printf("%c", text[i]);
        }
        printf("\n");
    }
}

