#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks for 5 courses (out of 100):\n");
    printf("Course 1: "); scanf("%f", &m1);
    printf("Course 2: "); scanf("%f", &m2);
    printf("Course 3: "); scanf("%f", &m3);
    printf("Course 4: "); scanf("%f", &m4);
    printf("Course 5: "); scanf("%f", &m5);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        
        total = m1 + m2 + m3 + m4 + m5;
        percentage = (float)total / 5;

        printf("\nTotal Marks: %.2f / 500", total);
        printf("\nPercentage:  %.2f%%\n", percentage);

        if (percentage >= 75) {
            printf("Result: PASS\nGrade:  DISTINCTION\n");
        } else if (percentage >= 60) {
            printf("Result: PASS\nGrade:  FIRST DIVISION\n");
        } else if (percentage >= 50) {
            printf("Result: PASS\nGrade:  SECOND DIVISION\n");
        } else {
            printf("Result: PASS\nGrade:  THIRD DIVISION\n");
        }
        
    } else {
        printf("\nResult: FAILED\n");
    }

    return 0;
}