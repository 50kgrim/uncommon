#include <stdio.h>

int main() {
    int average;

    printf("Enter the subject average: ");
    scanf("%d", &average);

    if (average >= 70 && average <= 100) {
        printf("Grade: A\n");
    } else if (average >= 60 && average < 70) {
        printf("Grade: B\n");
    } else if (average >= 50 && average < 60) {
        printf("Grade: C\n");
    } else if (average >= 40 && average < 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

