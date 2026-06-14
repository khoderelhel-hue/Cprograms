#include <stdio.h>
#include <string.h>

int main() {

    const char CONST_PASSWORD[] = "Login123";
    int numberX, numberY;
    char choice;

    while (1) {   

        printf("Press 'q' to exit the program, or any other key to continue: ");
        scanf(" %c", &choice);

        if (choice == 'q') {
            printf("Closing program...\n");
            break;   
        }

        printf("Enter the first integer (numberX): ");
        scanf("%d", &numberX);

        printf("Enter the second integer (numberY): ");
        scanf("%d", &numberY);

        if ((numberX * numberY > 100) && (numberX + numberY < 50)) {
            printf("Mathematical Validation Successful! Proceeding to Password Check.\n");
        } else {
            printf("Mathematical Validation Failed. Returning to main menu.\n");
            continue;   
        }

        for (int attempts = 3; attempts > 0; attempts--) {
            char enteredPassword[20];

            printf("Enter password: ");
            scanf("%s", enteredPassword);

            if (strcmp(enteredPassword, CONST_PASSWORD) == 0) {
                printf("Login Completed! Welcome to the System!\n");
                break;   
            } else {
                printf("Incorrect password. Remaining attempts: %d\n", attempts - 1);
            }

            if (attempts == 1) {
                printf("You have run out of password attempts. Closing program.\n");
                return 0;  
            }
        }
    }

    return 0;
}
