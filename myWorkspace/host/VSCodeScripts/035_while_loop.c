#include <stdio.h>
#include <stdint.h>

int main(){
    /*Syntax*/
    while(0){
        //Statement 1
        //Statement 2
        //Statement N
        ;
    }

    //If you only have one statement you can write like this:
    while(0)
        ; //Statement

    /*Print numbers 1 to 10*/
    uint16_t num = 0;

    while(num < 10){
        printf("%d\n", ++num);
    }

    return 0;
}