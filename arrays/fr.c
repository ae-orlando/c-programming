#include <stdio.h>

int main(void)
{
    int count = 3;
    char fruitName[40][20] = {"Orrange", "Pineaple", "Banana"};

    printf("Fruit name: ");
    scanf("%19s", fruitName[count]);
    count++;

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", fruitName[i]);
    }
    return 0;
}