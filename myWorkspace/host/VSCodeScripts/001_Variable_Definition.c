#include <stdio.h>

int main(){
    unsigned char d_ab = 160; //km
    unsigned char d_bc = 40; //km
    unsigned char d_ac; // Varible to hold result

    d_ac = d_ab + d_bc;

    printf("Distance from A to C is %ukm\n", d_ac); // Can use %d or %u, %u is used for unsigned int
    printf("You can also print in hex format: %X\n", d_ac); 
    printf("You can also print in character format: %c\n", d_ac); 

    return 0;
}