/*
    Problem Statement: Create a structure for a student with properties and print the details.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;

    printf("Enter the name of the student: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter the roll number of the student: ");
    scanf("%d", &student.rollNumber);
    printf("Enter the marks of the student: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
