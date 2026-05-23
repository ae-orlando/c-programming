#include <stdio.h>
int main(void)
{
    int i;
    char *fruits[] = {"Orange",
                      "Banana",
                      "Pineapple",
                      "Tomatoes"};

    fruits[3] = "Mango";
    for (i = 0; i <= 3; i++)
    {
        printf("%s\n", fruits[i]);
    }
}