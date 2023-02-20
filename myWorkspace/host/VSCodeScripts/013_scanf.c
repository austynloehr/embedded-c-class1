#include <stdio.h>

int main(){
    float number1, number2, number3;
    float average;

    printf("Enter the first number:"); // Contents are not automatically sent to console. System waits for user input. Buffer needs to be flushed
    fflush(stdout); // Flush standard output, push to display
    scanf("%f", &number1);

    printf("\nEnter the second number:");
    fflush(stdout);
    scanf("%f", &number2);

    printf("\nEnter the thrid number:");
    fflush(stdout);
    scanf("%f", &number3);

    average = (number1 + number2 + number3) / 3;

    printf("\nAverage: %f", average);


    return 0;
}
