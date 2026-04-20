#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Original: x=%d, y=%d\n", x, y);
    
    swapByValue(x, y);
    printf("After swapByValue (No change in main): x=%d, y=%d\n", x, y);

    swapByReference(&x, &y);
    printf("After swapByReference: x=%d, y=%d\n", x, y);

    return 0;
}