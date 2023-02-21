#include <stdio.h>
#include <stdint.h>

int main(){
    float num1, num2;

    printf("Enter two numbers: ");
    fflush(stdout);
    if (!scanf("%f %f", &num1, &num2)){
        printf("Invalid input !");
        return 0;
    }

    if (num1 > num2){
        printf("\nLargest value is: %0.2f", num1);
    } else if (num1 < num2){
        printf("\nLargest value is: %0.2f", num2);
    } else{
        printf("\n%0.2f is equal to %0.2f", num1, num2);
    }

    printf("\nPress any key to exit application");
    while (getchar() != '\n'){
        // Read input buffer and do nothing
    }
    getchar();

    return 0;
}