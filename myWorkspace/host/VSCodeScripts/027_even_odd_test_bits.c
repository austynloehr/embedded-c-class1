#include <stdio.h>
#include <stdint.h>

int main(){
    // 46: 00101110, LSB (last bit) is always 0 for even numbers
    //47: 00101111, LSB is always 1 for odd numbers

    /*To check if a value is even or odd we can use bit masking*/
    /*We just need to test if last bit is 1*/

    //Example
    //00101110 (46, input) 
    //AND
    //00000001 (1, mask) first 7 bits are zero so they are also zero in the ouput
    //Output will be 00000001 if last bit is negative

    //You can check any bit posiiton using this technique with AND
    //Set any mask value to check to 1, all others to 0
    //This is effective because it does not alter input bits and only outpits bits we are interested in

    uint32_t input = 65;
    uint32_t mask = 1;

    if (input & mask){
        printf("Input is ODD");
    } else{
        printf("Input is EVEN");
    }


    return 0;
}