#include <stdio.h>
#include <stdint.h>

int main(){
    /*In C 0 is false, anything non zero is true*/
    uint32_t logic;

    logic = (5 > 6); // Best to use paranthesis for code readability
    printf("Value of false: %d\n", logic);

    logic = (10 > 2);
    printf("Value of true: %d\n", logic);

    return 0;
}
