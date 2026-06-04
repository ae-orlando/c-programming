#include <stdio.h>

// Defining a structure
struct Student
{
    int id;
    char grade;
    float gpa;
};

int main()
{
    // Declaring and initializing a structure variable
    struct Student s1;

    s1.id = 101;
    s1.grade = 'A';
    s1.gpa = 3.85;

    // Accessing and printing all members simultaneously
    printf("--- Structure Data ---\n");
    printf("Student ID: %d\n", s1.id);
    printf("Grade: %c\n", s1.grade);
    printf("GPA: %.2f\n", s1.gpa);

    // Displaying total size allocated
    printf("Total memory size of struct Student: %lu bytes\n", sizeof(s1));
    
    return 0;
}