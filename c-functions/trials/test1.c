#include <stdio.h>

void print_line(char text[])
{
    printf("%s\n", text);
}

int main(void)
{
    int i;

    print_line("CCCCCCCCC");

    for (i = 0; i < 5; i++)
    {
        print_line("CC");
    }

    print_line("CCCCCCCCC");

    return 0;
}
