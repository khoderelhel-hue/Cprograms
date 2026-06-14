#include <stdio.h>
#include <stdlib.h>

typedef enum Department {
    COMPUTER = 1, ELECTRICAL, MECHANICAL
} Department;

typedef struct Student {
    char name[50];
    int midterm;
    int finalExam;
    Department department;
} Student;

void findMostSuccessful(Student *students, int n) {
    float highestScore = 0;
    float currentScore = 0;
    for (int i = 0; i < n; i++)
    {
        currentScore = (students[i].midterm * 0.4f) + (students[i].finalExam * 0.6f);
        if (highestScore < currentScore)
        {
            highestScore = currentScore;
        }
    }
    printf("Highest score = %.2f\n", highestScore);
}

void calculateFinalAverage(Student *students, int n);

int main() {
    int n = 0;
    printf("How many students would you like to enter: ");
    scanf("%d", &n);

    Student *students = (Student*) malloc(n * sizeof(Student));
    if (students == NULL) return 1;

    for(int i = 0; i < n; i++){
        printf("Enter the name of Student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the midterm grade: ");
        scanf("%d", &students[i].midterm);
        printf("Enter the final grade: ");
        scanf("%d", &students[i].finalExam);
        printf("Select the Department\n1. Computer\n2. Electrical\n3. Mechanical\n: ");
        scanf("%d", (int*)&students[i].department);
    }

    calculateFinalAverage(students, n);
    findMostSuccessful(students, n);

    free(students);
    students = NULL;

    return 0;
}

void calculateFinalAverage(Student *students, int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + students[i].finalExam;
    }
    int average = total / n;
    printf("Final exam average: %d\n", average);
}
