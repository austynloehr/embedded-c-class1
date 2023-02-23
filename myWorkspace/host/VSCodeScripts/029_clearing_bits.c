#include <stdio.h>
#include <stdint.h>


int main(){
    /*Clearing bits with a mask*/
    /*Set values to clear to zero, all other to 1*/
    /*Can also set NOT by setting clear values to 1 and remaining to 0*/
    /*Compare using AND*/

    uint32_t input= 34;
    uint32_t mask1 = 15; //0000 1111 (clear bits 7-4)
    uint32_t mask2 = 240; //1111 0000

    uint32_t output = input & mask1; //Set mask bits

    printf("Output from bit clear method 1: %d\n", output);

    output = input & (~mask2);
    printf("Output from bit clear method 2: %d\n", output);

    return 0;
}