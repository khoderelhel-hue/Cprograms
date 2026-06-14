#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main (){

    int option = 0;
    float balance = 1000;

    printf("*** ATM SYSTEM ***");

    do{
        printf("\nSelect an option:\n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nPress 4 to exit: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3: 
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using our services.\n");
                break;
            default:
                printf("\nInvalid selection\n");
        }
        
    } while (option != 4);

    return 0;
}

void checkBalance(float balance){
    printf("\nYour current balance: $%.2f\n", balance);
}

float deposit(){
    float amount = 0.0f;

    printf("\nEnter the amount you want to deposit: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }
}

float withdraw(float balance){
    float amount = 0.0f;

    printf("\nEnter the amount you want to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient balance\n");
        return 0.0f;
    }
    else{
        printf("Successfully withdrawn $%.2f\n", amount);
        return amount;
    }
}
