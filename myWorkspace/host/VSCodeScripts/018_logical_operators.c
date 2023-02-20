#include <stdio.h>
#include <stdint.h>

int main(){
    /*Logical Operators in C are: AND (&&) OR (||) NOT (!)*/

    /*And produces value 1 if both operands are non-zero*/
    uint32_t logic;
    uint32_t a = 10;
    uint32_t b = -20;

    logic = (a && b);
    printf("Value of AND statement: %d\n", logic); // Value is true since both values are non zero

    logic = !a;
    printf("Value of NOT statement: %d\n", logic); // a is non zero, therefore it is true. This makes !a false.

    logic = ((1 > 2) || (25 > 2));
    printf("Value of OR statement: %d\n", logic);

    logic = ((1 > 2) && (25 > 2));
    printf("Value of AND statement: %d\n", logic);

    logic = !logic;
    printf("Value of NOT statement: %d\n", logic); // Not will reverse the state of the operand

    return 0;
}