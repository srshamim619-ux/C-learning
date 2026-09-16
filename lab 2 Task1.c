#include <stdio.h>

int main()
{
    int student_id;
    int age;
    char section;
    float cgpa;

    printf("Enter Student ID: ");
    scanf("%d", &student_id);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Section: ");
    scanf(" %c", &section);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\n--- Student Information ---\n");

    printf("Student ID: %d\n", student_id);
    printf("Age: %d\n", age);
    printf("Section: %c\n", section);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
