/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

/*Global variables*/
int g_data1 = -4000;
int g_data2 = 200;
int result = 0;


int main(void)
{
	result = g_data1 + g_data2;

	printf("Result: %d\n", result);

    /* Loop forever */
	for(;;);
}
