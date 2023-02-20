#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t userAge;

    printf("Enter your age: ");
    fflush(stdout);

    scanf("%d", &userAge);

    if (userAge > 18){
        printf("You are able to vote\n");
    } else{
        printf("You are unable to vote\n");
    }

    printf("Press any key to exit application");
    while (getchar() != '\n')
    {
        // Read input buffer and do nothing
    }
    getchar();
    

    return 0;
}