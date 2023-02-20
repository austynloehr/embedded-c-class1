#include <stdio.h>
#include "007_staticUses_file1.h" // Need to include external file

void file1_myFun1(void); // Need to declare function prototype

/*
Using static with a global variable will provide privacy from other files
This entire program can see and edit mainPrivateData, but other files cannont
Note the error when trying to run the program, function tries to extern declare mainPrivateData and is unable to
*/
static int mainPrivateData; 

int main(){
    mainPrivateData = 100;

    printf("mainPrivateData before file1_myFun1: %d\n", mainPrivateData);

    file1_myFun1();

    printf("mainPrivateData after file1_myFun1: %d\n", mainPrivateData);

    return 0;
}