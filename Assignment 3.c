#include <stdio.h>

int main() {
    int num, i, range;

    printf("Enter an integer to generate its table: ");
    scanf("%d", &num);

    printf("Enter the range (e.g., up to 10 or 12): ");
    scanf("%d", &range);

    printf("\nMultiplication Table for %d:\n", num);
    printf("---------------------------\n");

    for (i = 1; i <= range; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}