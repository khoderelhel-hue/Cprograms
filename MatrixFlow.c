#include <stdio.h>
#include <string.h>

int main () {

    int rows, columns;

    printf("Enter the number of rows in the array: ");
    scanf("%d", &rows);   
    
    printf("Enter the number of columns in the array: ");
    scanf("%d", &columns);    

    int array[rows][columns];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("Enter the number for element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("{ %d } ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
