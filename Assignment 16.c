#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount] = arr[i];
            evenCount++;
        } else {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("\nEven numbers list (%d elements): ", evenCount);
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers list (%d elements): ", oddCount);
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}