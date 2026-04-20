#include <stdio.h>
#include <math.h>

int main() {
    long long binary, temp;
    int decimal = 0, i = 0, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp != 0) {
        rem = temp % 10;
        temp /= 10;
        decimal += rem * pow(2, i);
        i++;
    }

    printf("Binary: %lld\nDecimal: %d\n", binary, decimal);

    return 0;
}