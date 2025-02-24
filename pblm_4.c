/*Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F*/

#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;
    char grade;

    // Taking input for five subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // Calculating total marks
    }

    // Calculating percentage
    percentage = (float)total / 5;

    // Assigning grades based on percentage
    if (percentage >= 90)
        grade = 'E';  // Ex (Excellent)
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else
        grade = 'F';  // Fail

    // Displaying results
    printf("\nTotal Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
