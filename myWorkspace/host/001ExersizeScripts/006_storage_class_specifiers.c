#include <stdio.h>

void myFun1(void); // myFun1 prototype

int funCountGlobal = 0; // Defined in global to prevent counter reset, but available to rest of code

int main(){
    myFun1();
    myFun1();
    myFun1();
    myFun1();

    return 0;
}

void myFun1(void){
    static int staticCount = 0; // Static allows for global behavior, while only being visible to this function

    funCountGlobal ++;
    staticCount ++;

    printf("myFun called %d time(s)\n", staticCount);
}