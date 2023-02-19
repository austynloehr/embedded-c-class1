/*
 * main.c
 *
 *  Created on: Feb 11, 2023
 *      Author: austynloehr
 */

#include "math.h" //This is how you include a user defined library
#include <stdio.h>

int main() {
	printf("Add: %X\n", math_add(0x0FFF1111,0x0FFF1111));

	printf("multiply: %llX\n", math_mul(0x0FFF1111,0x0FFF1111));

	printf("divide: %0.2f\n", math_div(100, 7));

	return 0;
}

