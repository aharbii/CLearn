/**********************************************************
 * Sine Absulote Value Calculator
 * File: main.c
 * Description:
 * 
 * 
 * Author: Ahmed Harbi
 * Date: November 2021
**********************************************************/

#include<stdio.h>

int main(void) { 
    int number;
    printf("Enter Number:   ");
    scanf("%d", &number);
    int i = 1;
    while (number > 0)
    {
       if (i%2 == 0)
        {
            printf("%d,  ", i);
            number--;
        }
        i++;
    }
    printf("\n");
}