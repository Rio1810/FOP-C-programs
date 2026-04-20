#include <stdio.h>

int main() {
    int n1, n2, i, gcd, scd = -1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    int min = (n1 < n2) ? n1 : n2;

    for (i = 1; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i; 
        }
    }

    for (i = 2; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            scd = i; 
            break;   
        }
    }

    printf("\nResults for %d and %d:", n1, n2);
    printf("\nGreatest Common Divisor (GCD): %d", gcd);
    
    if (scd != -1)
        printf("\nSmallest Common Divisor (>1): %d\n", scd);
    else
        printf("\nSmallest Common Divisor (>1): None (Co-prime numbers)\n");

    return 0;
}