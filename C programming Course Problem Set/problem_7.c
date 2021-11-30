/******************************************************************************
 * File: problem_7.c
 * Description:  Write a C program which reads the date formatted mm/dd/yyyy
 *               and then it prints the total number of days since 00/00/0000
 *               - Note: You can assume that every month has 30 days so every
 *                       year has a 360 days.
 *               - Note: You can use strtol function to convert string to 
 *                       integer 
 *                       long strtol("2001", NULL, 10);
 * 
 *               - Sample Input: 03/04/2001
 *               - Sample Output: 720483
 * 
 *
 * Author: Ahmed Harbi
 * Date:   November 2021
*****************************************************************************/

#include <stdio.h>
#include "problem.h"
#include <string.h>
#include <stdlib.h>

int main() {
    char date[11];
    printf("Date: ");
    scanf("%s", &date);

    char day[3], month[3], year[5];
    strcpy(day, sub_string(date, 0, 2));
    strcpy(month, sub_string(date, 3, 5));
    strcpy(year, sub_string(date, 6, 10));

    char *dptr, *mptr, *yptr;
    long days, months, years;
    days = strtol(day, &dptr, 10);
    months = strtol(month, &mptr, 10);
    years = strtol(year, &yptr, 10);
    
    
    // int days, months, years;
    // scanf("%d/%d/%d", &days, &months, &years);
    long total_number;
    total_number = (days) + (months * 30) + (years * 360);

    printf("%ld\n", total_number);
}

char * sub_string(char * string, int start, int end) {
    char sub[100];
    int j = 0;
    for (int i = start; i < end; i++) {
        sub[j] = string[i];
        j++;
    }

    return sub;
}