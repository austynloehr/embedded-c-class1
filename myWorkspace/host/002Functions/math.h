/*
 * math.h
 *
 *  Created on: Feb 11, 2023
 *      Author: austynloehr
 */

/*Include guards*/
/*These prevent the inclusion of header files multiple times in a source file*/
#ifndef MATH_H_
#define MATH_H_

/*These are called exposed function prototypes*/
int math_add(int n1, int n2);
int math_sub(int n1, int n2);
long long math_mul(int n1, int n2);
float math_div(int n1, int n2);

#endif /* MATH_H_ */
