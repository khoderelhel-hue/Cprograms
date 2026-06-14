#include <stdio.h>
#include <math.h> 

int main() {

    int i;
    int x;
    int isPrime = 1;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &x);
    
    if (x <= 1) {
        isPrime = 0; 
    }
    else {
        for (i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }
    
    if (isPrime == 1) {
        printf("%d is a prime number.\n", x);
    } else {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}
