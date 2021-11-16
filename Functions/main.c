//
//  main.c
//  Functions
//
//  Created by Ahmed Harbi on 16/11/2021.
//

#include <stdio.h>

int min(int x, int y) {
    int m = x;
    if (y < x) {
        m = y;
    }
    return m;
}

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int is(int x, int y) {
    return x == y ? 1 : 0;
}

void hello() {
    printf("Hello!\n");
}

int ret5(){
    return 5;
}
int main() {
    // insert code here...
    int a = min(4, 5);
    printf("%d\n", a);
    int b = max(4, 5);
    printf("%d\n", b);
    int c = is(4, 5);
    printf("%d\n", c);
    hello();
    printf("%d\n", ret5());
    return 0;
}
