/******************************************************************************
 * File: problem_8.c
 * Description:  Write a program which takes a text from the user, and then
 *               print the occurrences of all characters in that text.
 *               - Note: 'C' and 'c' should be considered 'c', in other words
 *                       the text is case insensitive.
 * 
 *               - Sample Input: C language is a very powerful language that
 *                               allows programmers to fully control their 
 *                               computers
 *               - Sample Output: ' ': 14 | 'a': 8 | 'c': 3 | 'e': 7 | 'f': 2
 *                                'g': 5  | 'h': 2 | 'i': 2 | 'l': 8 | 'm': 3
 *                                'n': 3  | 'o': 7 | 'p': 3 | 'r': 8 | 's': 4
 *                                't': 6  | 'u': 5 | 'v': 1 | 'w': 2 | 'y': 2
 * 
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "problem.h"
#include "ctype.h"

int main() {
    char sentence[1000];
    printf("Enter Text: ");
    gets(sentence);

    char letters_counter[27][2];    
    int size = strlen(sentence);

    for (int i = 0; i < size; i++) {
        sentence[i] = tolower(sentence[i]);
    }
    count(sentence);
}


void count(char * text) {
    char letters[28] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
                        'x', 'y', 'z'};

    int occurrences[28] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                           0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                           0, 0, 0};

    int size = strlen(text);
    int len_letters = 27;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < len_letters; j++) {
            if (text[i] == letters[j]) {
                occurrences[j] += 1;
            }
        }
    }
    for (int j = 0; j < 27; j++) {
        if (occurrences[j] != 0) {
            printf("'%c' : %d | ", letters[j], occurrences[j]);
        }
    }

    printf("\n");
}