#include <stdio.h>

int powerIterative(int base, int exponent);
int powerRecursive(int base, int exponent);
inline static int absoluteValue(int x);

int main(){

    int base;
    int exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int absoluteExponent = absoluteValue(exponent);
    int iterativeResult = powerIterative(base, absoluteExponent);
    int recursiveResult = powerRecursive(base, absoluteExponent);

    printf("Iterative result: %d\n", iterativeResult);
    printf("Recursive result: %d\n", recursiveResult);
    printf("Absolute exponent: %d\n", absoluteExponent);

    return 0;
}

int powerIterative(int base, int exponent){
    int result = 1;

    for(int k = 0; k < exponent; k++){
        result = result * base;
    }
    return result;
}

int powerRecursive(int base, int exponent){
    if (exponent == 0){
        return 1;
    }
    else if(exponent == 1)
    {
        return base;
    }
    return base * powerRecursive(base, exponent - 1);
}

inline static int absoluteValue(int exponent){
    if(exponent < 0){
        printf("Error 001: Exponent cannot be less than 0!\n");
    }
    return (exponent < 0) ? -exponent : exponent;
}
