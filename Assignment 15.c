#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, limit;
    
    // Seed the random number generator with current time
    srand(time(NULL));

    printf("How many random numbers? ");
    scanf("%d", &n);
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("Random numbers:\n");
    for (int i = 0; i < n; i++) {
        // Generate number between 0 and limit
        printf("%d ", rand() % limit);
    }
    printf("\n");

    return 0;
}