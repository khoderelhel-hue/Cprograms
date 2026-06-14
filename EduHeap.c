#include <stdio.h>
#include <stdlib.h>

int calculateAverage(int *p, int n);
void addGrade();

int main() {

    int n = 0;
    printf("How many grades will you enter: ");
    scanf("%d", &n);

    int *grades = (int*) malloc(n * sizeof(int));
    if (grades == NULL) return 1;

    for(int i = 0; i < n; i++){
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
        addGrade();
    }

    printf("Average: %d\n", calculateAverage(grades, n));

    free(grades);
    grades = NULL;

    return 0;
}

int calculateAverage(int *p, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    return sum / n;
}

void addGrade() {
    static int counter = 0;
    counter++; 
    printf("%d grade(s) processed.\n", counter);
}
