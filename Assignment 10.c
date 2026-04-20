#include <stdio.h>
#include <math.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int choice, num;
    double a, b, result;

    do {
        printf("\n--- Advanced Calculator ---");
        printf("\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)");
        printf("\n4. Division (/)\n5. Power (a^b)\n6. Factorial (n!)\n7. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 7) break;

        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (choice == 1) result = a + b;
                else if (choice == 2) result = a - b;
                else if (choice == 3) result = a * b;
                else if (choice == 4) {
                    if (b != 0) result = a / b;
                    else { printf("Error: Div by 0\n"); continue; }
                }
                else result = pow(a, b); 
                printf("Result: %.2lf\n", result);
                break;

            case 6:
                printf("Enter an integer: ");
                scanf("%d", &num);
                if (num < 0) printf("Factorial not defined for negative numbers.\n");
                else printf("Result: %llu\n", factorial(num));
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}