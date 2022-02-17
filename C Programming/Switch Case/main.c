/**********************************************************
 * Switch Case
 * File: main.c
 * Description:
 * 
 * 
 * Author: Ahmed Harbi
 * Date: November 2021
**********************************************************/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void) { 
    char grade;
    printf("Enter Grade (A-F):  ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Your score is between 90 - 100\n");
        break;
    case 'B':
        printf("Your score is between 80 - 90\n");
        break;
    case 'C':
        printf("Your score is between 70 - 80\n");
        break;
    case 'D':
        printf("Your score is between 60 - 70\n");
        break;
    case 'E':
        printf("Your score is between 50 - 60\n");
        break;
    case 'F':
        printf("Sorry, you failed.\n");
        break;
    default:
        printf("Sorry, Invalide input.\n");
        break;
    }
}