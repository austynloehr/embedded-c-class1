#include <stdio.h>
#include <stdint.h>

int main(){
    /*Bits of the first operand will be shifted to the right by the amount of the second operand*/
    /*Adds zeros to the LH side of the binary number*/

    /*Decreases value*/

    /*operand1 >> operand2*/

    char a = 111; //0110 1111
    char b = a >> 4; //0000 0110

    printf("%d", b); //New value is 6

    return 0;
}