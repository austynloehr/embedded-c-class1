/*
 * math.c
 *
 *  Created on: Feb 11, 2023
 *      Author: austynloehr
 */

/* Create all function prototypes*/
int math_add(int n1, int n2);
int math_sub(int n1, int n2);
long long math_mul(int n1, int n2);
float math_div(int n1, int n2);

int math_add(int n1, int n2){
	return n1 + n2;
}

int math_sub(int n1, int n2){
	return n1 - n2;
}

long long math_mul(int n1, int n2){
	return (long long) n1 * n2; // Need to type cast one value here, and int * int = int, data will be lost for large numbers
}

float math_div(int n1, int n2){
	return (float) n1 / n2;
}
