#include <stdio.h>
#include <stdbool.h>

int main (){
    int x, y, z;
    printf("Select x: ");
    scanf("%d", &x);
    printf("Select y: ");
    scanf("%d", &y);
    printf("Select z: ");
    scanf("%d", &z);
    
    printf("The numbers you selected:\nx: %d\ny: %d\nz: %d\n\n", x, y, z);
    
    if (x % 2 == 0)
        printf("x is even.\n");
    else
        printf("x is odd.\n");
        
    if (y % 2 == 0)
        printf("y is even.\n");
    else
        printf("y is odd.\n");
        
    if (z % 2 == 0)
        printf("z is even.\n");
    else
        printf("z is odd.\n");
        
    return 0;
}
