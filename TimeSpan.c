#include <stdio.h>

void calculateTimePeriod(int totalDays);

int main() {

    int totalDays = 0;
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    calculateTimePeriod(totalDays);

    return 0;
}

void calculateTimePeriod(int totalDays){
    int years = totalDays / 365;
    totalDays = totalDays % 365;

    int weeks = totalDays / 7;
    int days = totalDays % 7;

    printf("\n%d Year(s)\n%d Week(s)\n%d Day(s).\n", years, weeks, days);
}
