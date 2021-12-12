/**********************************************************
 * Get Position
 * File: main.c
 * Description:
 * 
 * 
 * Author: Ahmed Harbi
 * Date: November 2021
**********************************************************/

#include<stdio.h>

int main(void) { 
    int x, y;
    printf("Cooridnates:     ");
    scanf("(%d, %d)", &x, &y);
    if ((x > 0))
    {
        if (y > 0) 
        {
            printf("Quadrant 1\n");
        }
        else
        {
            printf("Quadrant 4\n");
        }
    }
    else
    {
        if (y > 0) 
        {
            printf("Quadrant 2\n");
        }
        else
        {
            printf("Quadrant 3\n");
        }
    }
    
}