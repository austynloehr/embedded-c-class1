#include <stdio.h>
#include <stdint.h>

int main(){
    int32_t minVal;
    int32_t maxVal;

    printf("Enter minimum value:");
    scanf("%d", &minVal);

    printf("Enter maximum value:");
    scanf("%d", &maxVal);

    if(minVal > maxVal){
        printf("Minumum value is greater than maximum value! Exiting program...\n");
        return 0;
    }

    uint16_t count = 0;

    while (minVal <= maxVal){
        if(!(minVal % 2)){
            count++;
            printf("Value: %4d  |  Count: %d\n", minVal, count); //Note formating operator, %4d makes all values consume 4 spaces
        }
        minVal++;
    }

    return 0;
}