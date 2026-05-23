#include <stdio.h>

#define MAX_FRUITS 100

static void add_fruit(const char *fruits[MAX_FRUITS], int *count, const char *fruit)
{
    if (*count >= MAX_FRUITS)
    {
        printf("Cannot add more fruits: capacity reached (%d)\n", MAX_FRUITS);
        return;
    }
    fruits[*count] = fruit;
    (*count)++;
}

int main(void)
{
    int size = 0;
    const char *fruits[MAX_FRUITS] = {0};

    add_fruit(fruits, &size, "Orange");
    add_fruit(fruits, &size, "Banana");
    add_fruit(fruits, &size, "Pineapple");
    add_fruit(fruits, &size, "Tomatoes");
    add_fruit(fruits, &size, "Apple");
    add_fruit(fruits, &size, "Mapera");

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }

    return 0;
}