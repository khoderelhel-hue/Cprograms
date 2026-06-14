#include <stdio.h>
#include <string.h>

typedef enum StudentStatus {
    ACTIVE = 1, GRADUATED = 2, SUSPENDED = 3
} StudentStatus;

typedef struct Student {
    char name[30];
    int id;
    StudentStatus status; 
} Student;

void printStudentInfo(Student student);

int main() {
    Student student1 = {0}; 

    printf("Enter student name: ");
    scanf("%s", student1.name); 

    printf("Enter student ID: ");
    scanf("%d", &student1.id);

    student1.status = ACTIVE; 

    printStudentInfo(student1); 

    return 0;
}

void printStudentInfo(Student student) {
    printf("\n--- Student Card ---\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    
    if(student.status == ACTIVE) {
        printf("Status: Active Enrollment\n");
    }
}
