//
//  main.c
//  Structures
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

struct person {
    int id, age;
    char family[10];
};

typedef struct person person;

int main() {
    // insert code here...
    person Ahmed, Omar;
    Ahmed.id = 29811011;
    Ahmed.age = 23;
    Ahmed.family[0] = 'm';
    Omar.id = 300210231;
    Omar.age = 20;
    printf("Ahmed's ID is %d and his age is %d.\n", Ahmed.id, Ahmed.age);
    printf("Omar's ID is %d and his age is %d.\n", Omar.id, Omar.age);
    
    return 0;
}
