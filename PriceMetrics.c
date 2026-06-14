#include <stdio.h>
#include <stdlib.h>

typedef enum Category {
    FOOD, TECHNOLOGY, TEXTILE
} Category;

typedef struct Product
{
    char name[50];
    float price;
    Category category;
} Product;

float calculateAverage(Product *products, int n) {
    float total = 0.0f;
    for (int i = 0; i < n; i++)
    {
        if (products[i].category == TECHNOLOGY)
        {
            products[i].price *= 1.20f;
        }
        total += products[i].price;
    }
    return total / (float)n;
}

int main() {
    int n = 0;
    printf("How many products will be entered: ");
    scanf("%d", &n);

    Product *products = (Product*) malloc(n * sizeof(Product));
    if(products == NULL) return 1;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of Product %d: ", i + 1);
        scanf("%s", products[i].name);
        printf("Enter the price of the product: ");
        scanf("%f", &products[i].price);
        printf("Enter the category of the product (0 = FOOD, 1 = TECHNOLOGY, 2 = TEXTILE): ");
        scanf("%d", (int*)&products[i].category);
    }
    
    float averagePrice = calculateAverage(products, n);

    printf("Average price = %.2f\n", averagePrice);

    free(products);
    products = nullptr;

    return 0;
}
