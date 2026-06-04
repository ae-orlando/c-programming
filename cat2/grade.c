#include <stdio.h>

int main(void)
{
    int marks[4] = {75, 82, 68, 90};
    int total = 0;
    int i;

    for (i = 0; i < 4; i++)
    {
        total += marks[i];
    }

    for (i = 0; i < 4; i++)
    {
        printf("Unit %d mark: %d\n", i + 1, marks[i]);
    }

    printf("Total marks: %d\n", total);

    return 0;
}
