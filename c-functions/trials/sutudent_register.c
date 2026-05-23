#include <stdio.h>

void std_record(char stdnt_name[], char reg_no[], char yr_of_study[])
{
    printf("Hello %s, your student number is \033[32m%s\033[0m and you are in your %s year of study\n", stdnt_name, reg_no, yr_of_study);
}

int main(void)
{
    char stdntName[50];
    char regNo[25];
    char yrOfStudy[10];

    printf("Name: ");
    scanf("%s", &stdntName);

    printf("Registration Number: ");
    scanf("%s", &regNo);

    printf("Year of study: ");
    scanf("%s", &yrOfStudy);

    std_record(stdntName, regNo, yrOfStudy);
    return 0;
}