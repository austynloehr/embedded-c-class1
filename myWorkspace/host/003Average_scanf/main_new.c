/*
 * main_new.c
 *
 *  Created on: Feb 18, 2023
 *      Author: austynloehr
 */


#include <stdio.h>

int main(){
    double number1, number2, number3;
    double average;

    printf("Enter three numbers:"); // Contents are not automatically sent to console. System waits for user input. Output buffer needs to be flushed.
    fflush(stdout); // Flush standard output, push to display
    scanf("%lf %lf %lf", &number1, &number2, &number3);

    average = (number1 + number2 + number3) / 3;

    printf("\nAverage: %lf\n", average); // Program will try to close after executing this statement. Need to make app hang

    printf("Press any key to exit the application");

    // Flush \n from input buffer. This value hangs input buffer from clicking enter after user input.
    while(getchar() != '\n')
    {

    }
    getchar(); // Wait until a user enters any key

    return 0;
}
