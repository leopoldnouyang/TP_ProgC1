#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

void print_student_info(const Student *student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
}

int main() {
    Student *students = malloc(3 * sizeof(Student));
    if (students == NULL) {
        perror("Failed to allocate memory");
        return EXIT_FAILURE;
    }

    // Input student information
    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove newline
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
        getchar();  // Consume newline character
    }

    // Print student information
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d Information:\n", i + 1);
        print_student_info(&students[i]);
    }

    free(students);
    return 0;
}
