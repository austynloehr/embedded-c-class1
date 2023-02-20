#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(){
    char* address1 = (char*) 0x00007FFF8E3C3824; // Need to cast this value to pointer still, compiler thinks it is a number. Need to store pointers in pointer variable.

    // Note: 64 bit machines have pointers that are 8 bytes long
    // Therefore when a pointer is called, 8 bytes of memory is allocated to store data. Regardless of pointer size. 
    // Pointers store an address at some other memory address
    // Need to call variable type so that data type of pointer is known. Decides how much memory is allocated when pointer is read.

    char var = 100;
    printf("Address of var: %p\n", &var);

    char* varPtr = &var;
    printf("Read varPtr: %d\n", *varPtr);

    *varPtr = 65; // Write new data to varPtr (var)
    printf("Read var after varPtr Write: %d\n", var);

    char *pAddress2;
    pAddress2 = (char*) &g_data; // Will get warning because pAddress2 is char* and &g_data is long long int*. Need to cast to char*
    printf("Value at address %p is: %x\n", pAddress2, *pAddress2); // Only one byte of data will be fetched from the address since it was cast as char*

    int *pAddress3;
    pAddress3 = (int*) &g_data;
    printf("Value at address %p is: %x\n", pAddress3, *pAddress3); 

    // This will read the correct value now
    long long int *pAddress4;
    pAddress4 = (long long int*) &g_data;
    printf("Value at address %p is: %llX\n", pAddress4, *pAddress4); 

    pAddress2 = pAddress2 + 1; // Increment to next memory address
    printf("Value at address %p is: %x\n", pAddress2, *pAddress2); //Note that next byte of data from g_data is printed. 

    // 8 bytes of data was allocated to store g_data
    // *pAddress2 will print first byte of data 
    // Incrementing pAddress2 and printing value will print next byte of data since pointer is of char* type

    pAddress3 = pAddress3 + 1; // Increment memory address by 4 bytes, step set by size of int*
    printf("Value at address %p is: %x\n", pAddress3, *pAddress3); //Note that next 4 bytes of data are printed

    return 0;
}