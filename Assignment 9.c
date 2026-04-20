#include <stdio.h>

int main() {
    int n, og, r, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &n);

    og = n;

    while (og != 0) {
        r = og % 10;
        result += r * r * r;
        og /= 10;
    }

    if (result == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}