#include <stdio.h>
#include <stdint.h>


int main(){
    uint32_t num1, num2;
    uint32_t and, or, xor, not;

    printf("Bitwise Operator Program\n");
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    and = num1 & num2;
    or = num1 | num2;
    xor = num1 ^ num2;
    not = ~num1;

    printf("AND Result: %d\n", and);
    printf("OR Result: %d\n", or);
    printf("XOR Result: %d\n", xor);
    printf("NOT Result: %d\n", not);


    return 0;
}