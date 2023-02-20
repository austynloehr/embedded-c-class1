#include <stdio.h>

int main(){
    int variable = 27;
    char size = sizeof(variable);

    printf("Size of char data type is %d byte(s)\n", sizeof(char));
    printf("Size of short data type is %d byte(s)\n", sizeof(short));
    printf("Size of int data type is %d byte(s)\n", sizeof(int));
    printf("Size of long data type is %d byte(s)\n", sizeof(long));
    printf("Size of long long data type is %d byte(s)\n", sizeof(long long));

    printf("Size of int variable is %d byte(s)\n", size);

    return 0;
}