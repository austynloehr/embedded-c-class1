#include <stdio.h>

int function_add_numbers(int a, int b, int c);

int main()
{
    int valueA = 90, valueB = 70, valueC = 55; // You can also define variables like this

    int sum = function_add_numbers(valueA, valueB, valueC);

    printf("Return value of funtion is: %d\n", sum);

    return 0;
}


int function_add_numbers(int a, int b, int c)
{
    int result = a + b + c;

    return result;
}