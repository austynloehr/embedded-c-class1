#include <stdio.h>

int main(void){
    double number = 45.9123812939672134;
    printf("More than 6 decimal places: %0.12lf\n", number); // Use %(width specifer)f or lf
    printf("Scientific notion: %e\n", number);

    double chargeE = -1.60217434563e-19;
    printf("%0.8le\n", chargeE);

    return 0;
}