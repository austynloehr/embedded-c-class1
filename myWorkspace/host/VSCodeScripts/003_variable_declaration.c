#include <stdio.h>

int globalVariable; // This variable is defined in the global space

// Variable Declaration
extern int variable1;  // Extern tells the compiler to NOT allocate any space for variable1, since it is defined outsite the scope of this file

int main(){
    int localVariable; 

    variable1 = 1; // Error will occur since memory was not allocated for variable1, and compiler could not find it.

    return 0;
}