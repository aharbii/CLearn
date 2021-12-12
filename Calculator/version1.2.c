/**********************************************************
 * Simplified Calculator
 * File: version1.2.c
 * Description:
 * 
 * 
 * Author: Ahmed Harbi
 * Date: November 2021
**********************************************************/

#include<stdio.h>

int main(void) { 
    float first_number, second_number;
    char operation;
    printf("Which Operation do you want to perform? +, -, *, /.     ");
    scanf("%c", &operation);
    printf("Enter First Number:     ");
    scanf("%f", &first_number);
    printf("Enter Second Number:    ");
    scanf("%f", &second_number);
    

    switch (operation)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", first_number, second_number, (first_number + second_number));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", first_number, second_number, (first_number - second_number));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", first_number, second_number, (first_number / second_number));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", first_number, second_number, (first_number * second_number));
        break;    
    default:
        printf("Invalid Operation\n");
        break;
    }
}