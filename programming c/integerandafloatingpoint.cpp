#include <stdio.h>

int main() {
    int integer_num;
    float float_num;

    printf("Enter an integer: ");
    scanf("%d", &integer_num);

    printf("Enter a floating-point number: ");
    scanf("%f", &float_num);

    printf("Integer: %d\n", integer_num);
    printf("Floating-point number: %.2f\n", float_num);

    return 0;
}

