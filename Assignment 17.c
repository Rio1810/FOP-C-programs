#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum, term;
    printf("Enter x in degrees and number of terms: ");
    scanf("%f %d", &x, &n);

    float rad = x * (3.14159 / 180.0);
    term = rad;
    sum = term;

    for (int i = 1; i < n; i++) {
        term = -term * rad * rad / ((2 * i) * (2 * i + 1));
        sum += term;
    }

    printf("Sum of Sine series: %.4f\n", sum);
    printf("Actual sin(%.2f): %.4f\n", x, sin(rad));
    return 0;
}