#include <stdio.h>

int main(){
    double charge, chargeE, electrons;
    printf("Enter the charge:");
    fflush(stdout);
    scanf("%lf", &charge);

    printf("Enter the charge of an electron:");
    fflush(stdout);
    scanf("%le", &chargeE); //Accept charge in scientific notation

    electrons = -1 * (charge / chargeE);

    printf("Total number of electrons: %le\n", electrons);

    printf("Press any key to exit program");
	while(getchar() != '\n'){

	}
	getchar();

    return 0;
}