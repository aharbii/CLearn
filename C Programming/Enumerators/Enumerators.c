#include <stdio.h>
#include <stdlib.h>

enum month_t {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

int main(void) {

    enum month_t my_month;
    my_month = jun;

    if (my_month < jan) {
        
        printf("yes\n");
    }
    
    return 0;

}

