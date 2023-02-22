#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

void dimError(void);

int main(){
    uint8_t shape;
    double area;

    printf("Area Calculation Program\n");
    printf("Circle  -->  c\n");
    printf("Triangle  -->  t\n");
    printf("Rectangle -->  r\n");
    printf("Square  -->  s\n");
    printf("Trapezoid  -->  z\n");
    printf("Enter shape code: ");

    // Get shape code
    scanf("%c", &shape);

    switch (shape){
    case 'c': // Need to compare to ASCII value
        float r;
        float pi = 3.1415;

        printf("\nCircle Area Calculator\nEnter circle radius: ");
        scanf("%f", &r);

        if (r > 0){
            area = pi * powf(r, 2);
            printf("\nArea of circle is: %0.3lf", area);
        } else{
            dimError();
        }
        break;

    case 't':
        float b, h;
        
        printf("\nTriangle Area Calculator\n");
        printf("Enter base: ");
        scanf("%f", &b);

        printf("Enter height: ");
        scanf("%f", &h);

        if ((b > 0) && (h >0)){
            area = .5 * b * h;
            printf("\nArea of triangle is: %0.3lf", area);
        } else{
            dimError();
        }
        break;

    case 'r':
        printf("\nRectangle Area Calculator\n");
        printf("Enter base: ");
        scanf("%f", &b);

        printf("Enter height: ");
        scanf("%f", &h);

        if ((b > 0) && (h >0)){
            area = b * h;
            printf("\nArea of rectangle is: %0.3lf", area);
        } else{
            dimError();
        }
        break;
    
    case 's':
        printf("\nSquare Area Calculator\n");
        printf("Enter side length: ");
        scanf("%f", &b);

        if (b > 0){
            area = b * b;
            printf("\nArea of square is: %0.3lf", area);
        } else{
            dimError();
        }
        break;

    case 'z':
        float b1, b2;

        printf("\nTrapezoix Area Calculator\n");
        printf("Enter first base length: ");
        scanf("%f", &b1);
        printf("Enter second base length: ");
        scanf("%f", &b2);
        printf("Enter height: ");
        scanf("%f", &h);

        if ((b1 > 0) && (b2 >0) && (h > 0)){
            area = .5 * (b1 + b2) * h;
            printf("\nArea of trapezoid is: %0.3lf", area);
        } else{
            dimError();
        }
        break;

    default:
        printf("Invalid shape code. Exiting program...");
        return 0;
    }

    printf("\nPress any key to exit application");
    while (getchar() != '\n')
    {
        // Read input buffer and do nothing
    }
    getchar();
    
    return 0;
}

void dimError(void){
    printf("Invalid dimension. Exiting program...");
    exit(0);
}