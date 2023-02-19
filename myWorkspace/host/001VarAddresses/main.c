/*
 * main.c
 *
 *  Created on: Feb 8, 2023
 *      Author: austynloehr
 */
#include <stdio.h>

int main(){
    char a1 = 'A';
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';

    /*Note that these addresses are consecutive*/
    printf("Address of a1 is: %p\n", &a1); // Note syntax for printing a memory address
    printf("Address of a2 is: %p\n", &a2); // Note syntax for printing a memory address
    printf("Address of a3 is: %p\n", &a3); // Note syntax for printing a memory address
    printf("Address of a4 is: %p\n", &a4); // Note syntax for printing a memory address

    /*You store these memory addresses into pointers*/
    char * pa1 = &a1;
    printf("Value of pointer pa1 is: %p\n", pa1);

    /*You must declare the pointer as the same data type as the target*/
    /*You can get around this by using Type Casting*/
    unsigned long long typeCast = (unsigned long long) &a1; // (desired data type) value
    printf("Value of typeCast is: %llX\n", typeCast);

    return 0;
}
