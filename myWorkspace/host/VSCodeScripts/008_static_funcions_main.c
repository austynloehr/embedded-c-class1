#include <stdio.h>
#include "008_static_functions_file1.h"

void file1_myFun1(void);

int main()
{
    file1_myFun1(); // Need to call a function prototype to use external function

    return 0;
}

/*
We don't want other files in the project to call this function
Function can only be modified by this program
This can be accomplished by using the static class specifier with the function
Note the error when running
*/
static void change_system_clock(int system_clock)
{
    printf("System clock changed to: %d\n", system_clock);
}