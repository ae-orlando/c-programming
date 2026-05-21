#include <stdio.h>
int area(int length, int width)
{
    return (length * width);
}

int main(void)
{
    int length;
    int width;

    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    int A = area(length, width);
    printf("\n");
    printf("\033[32mThe area is: \033[0m%d\n", A);

    return 0;
}