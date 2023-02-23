#include <stdio.h>
#include <stdint.h>


int main(){
    /*Set the 4th ans 7th bit positions to 1*/ 
    /*We do this by using the OR operator*/
    /*Will keep all input bits and set any mask bits*/

    uint32_t input= 34;
    uint32_t mask = 144; //1001 0000 (index starts at 0)

    uint32_t output = input | mask; //Set mask bits

    printf("Output from bit set: %d", output);


    return 0;
}