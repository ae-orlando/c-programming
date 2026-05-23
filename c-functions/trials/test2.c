#include <stdio.h>

void print_number_pattern(int limit)
{
    int row;
    int number;

    for (row = 1; row <= limit; row++)
    {
        for (number = 1; number <= row; number++)
        {
            printf("%d", number);
        }

        printf("\n");
    }
}

int main(void)
{
    int limit;

    printf("Enter a number: ");
    scanf("%d", &limit);

    print_number_pattern(limit);

    return 0;
}
