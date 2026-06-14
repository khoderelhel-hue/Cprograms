#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0;
    int m = 0;
    printf("Enter the initial number of elements for the array: ");
    scanf("%d", &n);

    int *p = (int*) malloc(n * sizeof(int));
    if (p == NULL) return 1;

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++){
        printf("Element %d: %d\n", i + 1, p[i]);
    }
    
    printf("How many additional elements would you like to add: ");
    scanf("%d", &m);

    if(m == 0) {
        free(p);
        p = NULL;
        return 0;
    }
    
    int *temp = (int*) realloc(p, (n + m) * sizeof(int));
    if (temp == NULL) {
        free(p);
        p = NULL;
        return 1;
    }
    p = temp;

    for(int i = n; i < m + n; i++){
        printf("Enter new element %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("\n");
    
    for(int i = 0; i < n + m; i++){
        printf("Element %d: %d\n", i + 1, p[i]);
    }
    
    free(p);
    p = NULL;

    return 0;
}
