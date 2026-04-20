#include <stdio.h>
#include <math.h>

unsigned long long getFactorial(int n) {
    if (n < 0) return 0;
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int choice, num;

    do {
        printf("\n--- Mathematical Operations Menu ---");
        printf("\n1. Square Root\n2. Square\n3. Cube\n4. Check Prime");
        printf("\n5. Factorial\n6. Prime Factors\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6) {
            printf("Enter an integer: ");
            scanf("%d", &num);
        } else if (choice == 7) {
            break;
        }

        switch (choice) {
            case 1:
                if (num >= 0) 
                {
                    printf("Square Root of %d is %.2f\n", num, sqrt(num));
                }
                else 
                {
                    printf("Error: Negative number!\n");
                }
                break;
            case 2:
                printf("Square of %d is %d\n", num, num * num);
                break;
            case 3:
                printf("Cube of %d is %d\n", num, num * num * num);
                break;
            case 4:
                if (isPrime(num))
                {
                    printf("%d is a Prime Number.\n", num);
                }
                else 
                {
                    printf("%d is not a Prime Number.\n", num);
                }
                break;
            case 5:
                if (num < 0) 
                {
                    printf("Factorial not defined for negative numbers.\n");
                }
                else 
                {
                    printf("Factorial of %d is %llu\n", num, getFactorial(num));
                }
                break;
            case 6:
                printf("Prime factors of %d are: ", num);
                int temp = num;
                for (int i = 2; i <= temp; i++) {
                    while (temp % i == 0) {
                        printf("%d ", i);
                        temp /= i;
                    }
                }
                printf("\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}