/*
 * main.c
 *
 *  Created on: Feb 18, 2023
 *      Author: austynloehr
 */

#include <stdio.h>

int main(){
	char char1;
	char char2;
	char char3;
	char char4;
	char char5;
	char char6;

	printf("Enter 6 characters:");
	fflush(stdout);

	scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

	printf("%d %d %d %d %d %d\n", char1, char2, char3, char4, char5, char6);

	printf("Press any key to exit program");
	while(getchar() != '\n'){

	}
	getchar();

	return 0;
}
