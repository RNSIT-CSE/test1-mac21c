// write a program to add 2 numbers
//write your code here
#include <stdio.h>

int main() {
    int number1, number2, sum;

    // Ask for input
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Calculate the sum
    sum = number1 + number2;

    // Display the result
    printf("Sum = %d\n", sum);

    return 0;
}
