#include <stdio.h>
#include <stdlib.h>

int main() {
    int *grades = (int*) malloc(3 * sizeof(int));
    if (grades == NULL) return 1;

    int *ptr = grades; 
    int sum = 0;

    printf("Enter 3 grades:\n");

    while (ptr < (grades + 3)) {
        printf("Enter grade %ld: ", (ptr - grades) + 1);
        
        scanf("%d", ptr);     
        sum += *ptr;       
        ptr++;                
    }

    printf("Average: %d\n", sum / 3);

    free(grades);
    grades = NULL;

    return 0;
}
