#include <stdio.h>

int max(int num1, int num2)
{
    if (num1 != num2)
    {
        if (num1 > num2)
        {
            return num1;
        }
        else
        {
            return num2;
        }
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    int x;
    int y;
    printf("Enter num1: ");
    scanf("%d", &x);
    printf("Enter num2");
    scanf("%d", &y);

    int ans = max(x, y);
    printf("%d\n", ans);
    return 0;
}