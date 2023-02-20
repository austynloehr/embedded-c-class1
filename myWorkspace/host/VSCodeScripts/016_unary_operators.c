#include <stdio.h>
#include <stdint.h>

int main(){
    // Incrementing Example
    uint32_t x, y;

    x = 5;
    y = ++x; // Pre-incrementing. Increment value, then assign to y. Still affects value of x.

    uint32_t n, m;
    n = 5;
    m = n++; // Post-incrementing. Set value of m, then increment. Still affects value of n.

    printf("Incrementing Example Data:\n");
    printf("Value of y: %ld\n", y);
    printf("Value of x: %ld\n", x);
    printf("Value of m: %ld\n", m);
    printf("Value of n: %ld\n\n", n);

    // Pointer Example
    printf("Pointer Example Data:\n");
    uint32_t *pAddress = (uint32_t*) 0xffff0000;

    pAddress = pAddress + 1; // Arithmetic add operation, actually increments by 4 since type is uint32_t
    printf("Value of pAddress after athrihmetic: %X\n", pAddress);

    pAddress++; // This is equivalent to the line above
    printf("Value of pAddress after increment: %X\n", pAddress);

    return 0;
}