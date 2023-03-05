#include <stdio.h>
#include <stdint.h>

int main(){
    /*Set the 4th bit of the given data*/

    /*Method 1*/
    /*Not using bit shift*/
    uint8_t data = 0x08; //0000 1000
    uint8_t mask = 0x10; //0001 0000
    uint8_t output = data | mask;
    printf("Method 1 output: %d\n", output);

    /*Method 2*/
    /*Using bitshift*/
    output = data | (1 << 4); // This makes creating a mask much easier
    printf("Method 2 output: %d\n", output);

    /*Clear the 4th bit of the given data*/
    data = 0x18;
    output = data & (~(1 << 4));
    printf("Cleared 4th bit output: %d\n", output);

    return 0;
}