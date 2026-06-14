#include <stdio.h>
#include <string.h>

typedef struct Employee {
    int id;
    char fullName[50];
    double salary;
    char hometown[50];
} Employee;

int main() {

    Employee employees[3] = {
        {369, "Nizamettin", 20500.0, "Adana"},
        {258, "Ahmet", 20550.0, "Adiyaman"},
        {147, "Abdullah", 30600.0, "Hatay"}
    };

    for(int i = 0; i < 3; i++) {
        printf("ID of Employee %d: %d\n", i + 1, employees[i].id);
        printf("Name of Employee %d: %s\n", i + 1, employees[i].fullName);
        printf("Salary of Employee %d: $%.2lf\n", i + 1, employees[i].salary);
        printf("Hometown of Employee %d: %s\n", i + 1, employees[i].hometown);
        printf("\n");
    }

    return 0;
}
