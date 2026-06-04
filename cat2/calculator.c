#include <stdio.h>

int main(void)
{
    double first_number;
    double second_number;
    char operation;

    printf("Enter first number: ");
    scanf("%lf", &first_number);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%lf", &second_number);

    if (operation == '+') {
        printf("Result: %.2f\n", first_number + second_number);
    } else if (operation == '-') {
        printf("Result: %.2f\n", first_number - second_number);
    } else if (operation == '*') {
        printf("Result: %.2f\n", first_number * second_number);
    } else if (operation == '/') {
        if (second_number == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("Result: %.2f\n", first_number / second_number);
        }
    } else {
        printf("Error: Invalid operation.\n");
    }
    return 0;
}
