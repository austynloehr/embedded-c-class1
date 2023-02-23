#include <stdio.h>
#include <stdint.h>


int main(){
    /*Toggling bits using XOR*/
    /*XOR outputs 1 if bits are different, 0 if same*/
    /*Create mask with toggle bits as 1 and remaining as 0*/
    /*Will toggle to 1 when input is 0, and 0 when input is 1*/

    uint32_t input= 0;
    uint32_t mask = 1; //0000 0001 (index starts at 0)

    uint32_t output = input ^ mask; //toggle input

    printf("Output from bit toggle: %d\n", output);

    output = output ^ mask; //toggle input

    printf("Output from bit toggle: %d\n", output);

    return 0;
}