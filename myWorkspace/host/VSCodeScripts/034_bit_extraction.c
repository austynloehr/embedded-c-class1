#include <stdio.h>
#include <stdint.h>

int main(){
    /*Extract bits from the 9th to 14th bit positions in given data, store in another variable*/
    /*Method 1*/
    uint16_t data = 0xB410; //1 (011 010)0 0001 0000
    uint16_t temp = data >> 9; // Shift interested values all the way to the RH side
    uint8_t output =(uint8_t) (temp & 0x003F); //Mask for bits 0 thru 5 (0000 0000 0011 1111), also need to typecast to 8bit value
    printf("Method 1 output: %d\n", output); //26

    /*Method 2*/
    output = (uint8_t) ((data >> 9) & 0x003F); //0001 1010
    printf("Method 2 output: %d\n", output); //26

    return 0;
}