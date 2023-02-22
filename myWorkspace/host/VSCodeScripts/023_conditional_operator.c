#include <stdio.h>
#include <stdint.h>

int main(){
    uint16_t a;

    /*expression1 ? expression2 : expression3*/
    /*If expression1 is true, execute expression2. If expression1 is false, execute expression3*/
    a = (5 + 4) ? (9 - 4) : 99; //Expression2 gets executed since (5+4)!=0
    printf("Value of a: %d\n", a);

    /*These two statements are equivalent*/
    uint8_t age = 19;

    /*Using if statements*/
    if (age > 18){
        printf("You can vote\n");
    } else{
        printf("You cannot vote\n");
    }

    /*Using conditional operator*/
    (age > 18) ? printf("You can vote\n") : printf("You cannot vote\n");

    return 0;
}