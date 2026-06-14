#include <stdio.h>

typedef enum {
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3,
    WEDNESDAY = 4, THURSDAY = 5,
    FRIDAY = 6, SATURDAY = 7 
} Day;

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

void printConnectionStatus(Status status);

int main() {
    
    // enum = A user-defined data type that consists 
    //        of a set of named integer constants
    //        Benefit: Replaces numbers with readable names

    Day today = MONDAY;

    if(today == SUNDAY || today == SATURDAY) {
        printf("It's the weekend\n");
    }
    else{
        printf("It's a weekday\n");
    }

    Status status = SUCCESS;

    printConnectionStatus(status);
    
    return 0;
}

void printConnectionStatus(Status status) {

    switch(status){
        case SUCCESS:
            printf("Connection was successful\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting...\n");
            break;
    }
}
