#include <stdio.h>


void inputMarks(int *mark1, int *mark2, int *mark3) {
    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%d", mark1);
    printf("Enter marks for Subject 2 (out of 100): ");
    scanf("%d", mark2);
    printf("Enter marks for Subject 3 (out of 100): ");
    scanf("%d", mark3);
}


float calculatePercentage(int mark1, int mark2, int mark3) {
    return (mark1 + mark2 + mark3) / 3.0;
}


char assignGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 75) {
        return 'B';
    } else if (percentage >= 50) {
        return 'C';
    } else {
        return 'F';
    }
}

int main() {
    int mark1, mark2, mark3;
    float percentage;
    char grade;

    
    inputMarks(&mark1, &mark2, &mark3);

    
    percentage = calculatePercentage(mark1, mark2, mark3);


    grade = assignGrade(percentage);

    
    printf("\nFinal Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
