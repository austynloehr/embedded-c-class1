#include <stdio.h>
#include <stdint.h>

int main(){
    float income, taxRate, taxPayable, taxAddl;

    printf("Enter your income: ");
    fflush(stdout);
    if ((!scanf("%f", &income)) || (income < 0)){ // Check if scanf is valid and if income is positive
        printf("Invalid input !"); // Scanf returns 0 if invalid character is input aka non-float
        return 0;
    }

    taxAddl = 0;
    if (income <= 9525){
        taxRate = 0;
    } else if ((income > 9525) && (income <= 38700)){ //Note use of parenthesis around logical expressions
        taxRate = 12;
    } else if ((income > 38700) && (income <= 82500)){
        taxRate = 22;
    } else{
        taxRate = 32;
        taxAddl = 1000;
    }

    taxPayable = income * (taxRate / 100) + taxAddl;

    printf("Your payable taxes are: $%0.2f", taxPayable);
    
    return 0;
}