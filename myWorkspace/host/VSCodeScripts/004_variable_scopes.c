#include <stdio.h>

// This is a function prototype of myFunction
// Declares function so that it can be writtne after main
void myFunction(void);

int globalScopeVar;
int duplicateVal = 1;

int main(){
    int mainScopeVar; // This variable can only be manipulated within main()

    int duplicateVal = 2;
    printf("%d\n", duplicateVal);  // Note that 2 is printed. Priority is given to local variable over the global variable of the same name

    int initValue;
    initValue = initValue + 10;

    printf("%d\n", initValue); // Note that a random number is assigned to local variables that have only been defined but not initialized
    printf("%d\n", globalScopeVar); // Note global variable default value is zero

    // This is a function call
    myFunction();

    return 0;
}


// This is a function definition
void myFunction(void){ // Function that deos not return any values and takes no inputs
    globalScopeVar = 30;  // Can manipulate global scope variable from within this function
    printf("%d", globalScopeVar);
}