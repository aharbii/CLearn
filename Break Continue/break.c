/******************************************************************************
 * File: break.c
 * Description:  break; continue; practice
 * Author: Ahmed Harbi
 * Date: November 2021
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    do {
        printf("%i\n", i);
        if (i > 60) {
            break;
        }
        i++;
    } while (i < 100);
    return 0;
}