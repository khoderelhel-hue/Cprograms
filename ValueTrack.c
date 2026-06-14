#include <stdio.h>
#include <string.h>

int main() {

    float products[] = {25.50, 40.00, 15.75, 60.00, 12.00};

    printf("The first and the last product price is:\n\n1. Product: %.2f$\nLast Product: %.2f$\n\n", products[0], products[4]);
    //------------------------------------------------------------------------------------------------------------------------------------------//
    float sum = 0.0f;
    
    for(int i = 0; i < 5; i++){
        sum += products[i];
    }
    printf("The sum is: %.2f$\n\n", sum);
    // ------------------------------------------------------------------------------------------------------------------------------------------//
    float max, min;
    max = products[0];
    min = products[0]; 

    for (int i = 1; i < 5; i++){
        if(products[i] > max){
            max = products[i];
        }
        if(products[i] < min){
            min = products[i];
        }
    }

    printf("The highest price is: %.2f$\nThe lowest price is: %.2f$\n\n", max, min);
    //-------------------------------------------------------------------------------------------------------------------------------------------//
    for(int i = 0; i <= 4; i++){
        printf("%d. Product is: %.2f$\n", i + 1, products[i]);
    }
    printf("\n");
    //-------------------------------------------------------------------------------------------------------------------------------------------//
    for (int i = 0; i <= 4; i++){
        products[i] = products[i] * 1.10f; 
        printf("Updated %d. Product: %.2f$\n", i + 1, products[i]);
    }

    return 0;
}
