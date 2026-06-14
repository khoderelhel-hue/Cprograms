#include <stdio.h>
#include <string.h>

#define CONST_PASSWORD "Login123"

int main() {

    char exitChoice;
    int numberX, numberY;
    char enteredPassword[20];

    while (1) {

        printf("Press 'q' to exit the program, or any other key to continue: ");
        scanf(" %c", &exitChoice);

        if (exitChoice == 'q') {
            printf("Program closed.\n");
            break;
        }

        printf("Enter the value for numberX: ");
        scanf("%d", &numberX);

        printf("Enter the value for numberY: ");
        scanf("%d", &numberY);

        if ((numberX * numberY > 100) && (numberX + numberY < 50)) {
            printf("Mathematical Validation Successful! Proceeding to Password Check.\n");

            for (int attempts = 3; attempts > 0; attempts--) {

                printf("Enter password: ");
                scanf("%s", enteredPassword);

                if (strcmp(enteredPassword, CONST_PASSWORD) == 0) {
                    printf("Login Completed! Welcome to the System!\n\n");
                    break;
                } else {
                    if (attempts - 1 > 0) {
                        printf("Incorrect password. Remaining attempts: %d\n", attempts - 1);
                    }
                }

                if (attempts == 1) {
                    printf("You have run out of password attempts. Closing program.\n");
                    return 0;
                }
            }

        } else {
            printf("Mathematical Validation Failed. Returning to main menu.\n\n");
        }

    }

    return 0;
}
