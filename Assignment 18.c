#include <stdio.h>

int main() {
    char s1[100], s2[100], rev[100];
    int len = 0, i, j, found = 0, isPalindrome = 1;

    printf("Enter main string: ");
    scanf("%s", s1);
    printf("Enter string for equality/substring check: ");
    scanf("%s", s2);

    while (s1[len] != '\0') {
        len++;
    }
    printf("\nLength of string = %d", len);

    for (i = 0; i < len; i++) {
        rev[i] = s1[len - 1 - i];
    }
    rev[len] = '\0';
    printf("\nReversed string = %s", rev);

    for (i = 0; i < len; i++) {
        if (s1[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) 
        printf("\nThe string is a Palindrome");
    else 
        printf("\nNot a Palindrome");

    int equal = 1;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            equal = 0;
            break;
        }
    }
    if (equal) 
        printf("\nStrings are equal");
    else 
        printf("\nStrings are not equal");

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) break;
        }
        if (s2[j] == '\0') {
            found = 1;
            break;
        }
    }
    if (found) 
        printf("\nSubstring found in main string\n");
    else 
        printf("\nSubstring not found\n");

    return 0;
}