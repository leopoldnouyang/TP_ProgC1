#include <stdio.h>
#include <string.h>

void print_student_info(const char *name, int age) {
    printf("Student Name: %s\n", name);
    printf("Student Age: %d\n", age);
}

int main() {
    char name[50];
    int age;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  // Remove newline character

    printf("Enter student age: ");
    scanf("%d", &age);

    print_student_info(name, age);

    return 0;
}
