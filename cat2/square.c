#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The square of %d is %d\n", number, square(number));

    return 0;
}
