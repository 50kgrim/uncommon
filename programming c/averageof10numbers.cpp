#include <stdio.h>

int main() {
    int i, num;
    int sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }

    average = (float)sum / 10;

    printf("Average of the 10 numbers is: %.2f\n", average);

    return 0;
}

