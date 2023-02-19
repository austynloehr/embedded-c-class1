#include <stdio.h>

int main(){
    unsigned char data = 0x87 + 0xff00; // 0x87 is one byte, 0xff00 is two byes, compliler implicitly considers both as 4 byte constants, called integer conversion, warning is generated
    unsigned char data2 = 0x01 + 0x0089;
    unsigned char data3 = (unsigned char) (0x87 + 0xff00); // Casts 0x87 + 0xff00 to a one byte char, no warning recieved since done explicitly
    unsigned char data = 0x1FFFFFFA0B0 + 0xff00; // 0x1FFFFFFA0B0 is implicitly cast as long long int

    float result1 = 80 / 3; // Compiler assumes these values are ints when dividing, therefore result will be a whole number
    float result2 = (float) 80 / 3; // Need to typecast one value as float, compiler will implicitly promote second value to float. This will give you the correct division.
    
    printf("Data3: %u\nResult: %f\n", data3, result1);
    printf("Note that 80 / 3 is NOT a whole number\n");
    printf("Restult after typecasting: %0.2f\n", result2);

    return 0;
}