#include <stdio.h>
#include <stdint.h>

int main(){
    /*Bits of the first operand will be shifted to the left by the amount of the second operand*/
    /*Adds zeros to the RH side of the binary number*/

    /*Increases value*/

    /*operand1 << operand2*/

    unsigned char a = 111; //0110 1111
    unsigned char b = a << 4; //1111 0000

    printf("%u", b); //New value is 240

    return 0;
}