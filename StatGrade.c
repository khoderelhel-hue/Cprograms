#include <stdio.h>

void showMenu();
void enterGrades(float grades[], int size);
float calculateAverage(float grades[], int size);
float findHighestGrade(float grades[], int size);
int factorial(int n);

int main()
{
    float classGrades[5] = {0.0f};
    int choice = 0;
    int size = 5;
    float average = 0.0f;
    float highestGrade = 0.0f;
    int n = 0;
    int bonusPoints = 0;

    while (choice != 6)
    {
        showMenu();

        printf("\nYour choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            enterGrades(classGrades, size);
        }
        else if (choice == 2)
        {
            average = calculateAverage(classGrades, size);
            printf("Class Average: %.2f\n\n", average);
        }
        else if (choice == 3)
        {
            highestGrade = findHighestGrade(classGrades, size);
            printf("Highest Grade: %.2f\n\n", highestGrade);
        }
        else if (choice == 4)
        {
            printf("Enter a small number for the bonus calculation: ");
            scanf("%d", &n);

            bonusPoints = factorial(n);
            printf("Bonus Points: %d\n\n", bonusPoints);
        }
        else if (choice == 5)
        {
            printf("\n--- Grade List ---\n");
            for (int i = 0; i < size; i++)
            {
                printf("Grade %d: %.2f\n", i + 1, classGrades[i]);
            }
            printf("\n");
        }
        else if (choice == 6)
        {
            printf("Exiting the program.\n");
        }
        else
        {
            printf("Invalid selection! Please try again.\n\n");
        }
    }

    return 0;
}

void showMenu()
{
    printf("--- STUDENT INFORMATION SYSTEM ---\n");
    printf("-1-         Enter Grades          -1-\n");
    printf("-2-       Calculate Average       -2-\n");
    printf("-3-       Find Highest Grade      -3-\n");
    printf("-4-     Calculate Bonus Points    -4-\n");
    printf("-5-          View Grades          -5-\n");
    printf("-6-              Exit             -6-\n");
}

void enterGrades(float grades[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
    printf("Grades successfully saved.\n\n");
}

float calculateAverage(float grades[], int size)
{
    float sum = 0.0f;
    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }
    return sum / (float)size;
}

float findHighestGrade(float grades[], int size)
{
    float max = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] > max)
        {
            max = grades[i];
        }
    }
    return max;
}

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
