#include <stdio.h>

int main() {
    int num, remainder, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");

    if (num == 0) {
        printf("0");
    }

    while (num != 0) {
        remainder = num % 10;         
        printf("%d", remainder);      
        num = num / 10;               
    }

    printf("\n");

    return 0;
}