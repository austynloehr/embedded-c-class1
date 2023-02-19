/*
 * main.c
 *
 *  Created on: Feb 18, 2023
 *      Author: austynloehr
 */

#include <stdio.h>

int main(){
    float number1, number2, number3;
    float average;

    printf("Enter the first number:"); // Contents are not automatically sent to console. System waits for user input. Output buffer needs to be flushed.
    fflush(stdout); // Flush standard output, push to display
    scanf("%f", &number1);

    printf("\nEnter the second number:");
    fflush(stdout);
    scanf("%f", &number2);

    printf("\nEnter the thrid number:");
    fflush(stdout);
    scanf("%f", &number3);

    average = (number1 + number2 + number3) / 3;

    printf("\nAverage: %f\n", average); // Program will try to close after executing this statement. Need to make app hang

    printf("Press any key to exit the application");

    // Flush \n from input buffer. This value hangs input buffer from clicking enter after user input.
    while(getchar() != '\n')
    {

    }
    getchar(); // Wait until a user enters any key

    return 0;
}