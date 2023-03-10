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

int main(void)
{
	/*Register addresses*/
	uint32_t *pClkCtrlReg = (uint32_t*) 0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*) 0x40020C00;
	uint32_t *pPortDOutReg = (uint32_t*) 0x40020C14;

	/*Enable clock for AHB1ENR*/
	/*We want to set only the 3rd bit to 1, leave all other bits. Do this with bitwise OR*/
	*pClkCtrlReg |= (1 << 3);

	/*Configure mode for pin 12*/
	/*Clear bits 24 and 25*/
	*pPortDModeReg &= ~(3 << 24); //Push 11 to bit 24 and 25 positions

	/*Set bits 24 and 25 to 01*/
	*pPortDModeReg |= (1 << 24);

	/*Set pin 12 to HIGH*/
	/*Need to set bit 12 to 1*/
	*pPortDOutReg |= (1 << 12);

	while(1);
}
