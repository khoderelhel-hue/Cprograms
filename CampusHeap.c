#include <stdio.h>
#include <stdlib.h>

typedef enum StudentStatus {
    ACTIVE = 1, SUSPENDED, GRADUATED
} StudentStatus;

typedef struct Student {
    char name[50];
    int id;
    StudentStatus status; 
} Student;

int main() {
    int n = 0;
    printf("How many students would you like to assign: ");
    scanf("%d", &n);

    Student *students = (Student*) malloc(n * sizeof(Student));
    if(students == NULL) return 1;

    for(int i = 0; i < n; i++) {
        printf("\n--- Student %d Details ---\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name); 

        printf("ID: ");
        scanf("%d", &students[i].id);

        int choice;
        printf("Status (1:Active, 2:Suspended, 3:Graduated): ");
        scanf("%d", &choice);
        students[i].status = (StudentStatus)choice;
    }

    printf("\n======= REGISTERED STUDENTS =======\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s - ID: %d - Status: ", i + 1, students[i].name, students[i].id);
        
        switch(students[i].status) {
            case ACTIVE:    printf("Active\n"); break;
            case SUSPENDED: printf("Suspended\n"); break;
            case GRADUATED: printf("Graduated\n"); break;
            default:        printf("Unknown\n");
        }
    }

    free(students);
    students = NULL;

    return 0;
}
