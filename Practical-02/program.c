#include <stdio.h>
typedef struct
{
    int rollNo;
    char name[50];
    float DSA, Math, EC;
    float total;
    float percentage;
} Student;
int main()
{
    Student s[3];
    int i;
    printf("===== STUDENT RESULT DATABASE =====\n\n");
    // Input student details
    for(i = 0; i < 3; i++)
    {
        printf("Enter details of Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks in DSA: ");
        scanf("%f", &s[i].DSA);
        printf("Marks in Math: ");
        scanf("%f", &s[i].Math);
        printf("Marks in EC: ");
        scanf("%f", &s[i].EC);
        // Calculate total and percentage
        s[i].total = s[i].DSA + s[i].Math + s[i].EC;
        s[i].percentage = s[i].total / 3;
        printf("\n");
    }
    printf("========== STUDENT RESULT ==========\n\n");
    printf("Roll No\tName\tDSA\tMath\tEC\tTotal\tPercentage\n");
    printf("----------------------------------------------------------\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d\t%s\t%.0f\t%.0f\t%.0f\t%.0f\t%.2f%%\n",
               s[i].rollNo,
               s[i].name,
               s[i].DSA,
               s[i].Math,
               s[i].EC,
               s[i].total,
               s[i].percentage);
    }
    return 0;
}