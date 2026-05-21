#include <stdio.h>

const float PI = 3.142;
float circle_area(int r)
{
    return (PI * (r * r));
}

int main(void)
{
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);

    float area = circle_area(radius);
    printf("\033[32mThe area of the circle is: \033[0m%f\n", area);
    return 0;
}