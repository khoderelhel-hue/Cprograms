#include <stdio.h>

double f(double x) {
    return x * x * x;
}

int main() {
    double a = 0.0;          
    double b = 2.0;          
    int n = 1000;            
    double totalArea = 0.0;
    
    double dx = (b - a) / n; 

    for (int i = 0; i < n; i++) {
        double x = a + (i * dx);    
        double height = f(x);       
        
        totalArea += height * dx;
    }

    printf("Integral result between 0 and 2: %f\n", totalArea);

    return 0;
}
