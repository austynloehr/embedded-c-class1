#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t key_read = 1;

    /*Evaluates an expression, expression must return int. Compares result to each case*/
    switch (key_read){
    case 1: // integer value MUST follow case
        printf("key_read equals 1");
        break;
    case 2:
        printf("key_read equals 2");
        break;
    case 3:
        printf("key_read equals 3");
        break;
    case 4:
        printf("key_read equals 4");
        break;
    default: //Always write default case at the end. No need for break since it will exit after executing.
        printf("key_read is greater than 4");
    }

    return 0;
}