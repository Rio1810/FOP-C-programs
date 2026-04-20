#include <stdio.h>
#include <string.h>

void reverse_str(char *str) {
    int l = strlen(str);
    for (int i = 0; i < l / 2; i++) {
        char temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
}

int main() {
    char s1[100], s2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    do {
        printf("\n--- MENU ---");
        printf("\n1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Reverse\n6. Exit");
        printf("\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of first string: %ld\n", strlen(s1)); [cite: 12]
                break;
            case 2:
                strcpy(temp, s2); [cite: 12]
                printf("Copied second string to temp: %s\n", temp);
                break;
            case 3:
                strcat(s1, s2); [cite: 12]
                printf("Concatenated string: %s\n", s1);
                break;
            case 4:
                if (strcmp(s1, s2) == 0) printf("Strings are equal\n"); [cite: 12]
                else printf("Strings are not equal\n");
                break;
            case 5:
                reverse_str(s1); [cite: 7]
                printf("Reversed first string: %s\n", s1);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}