#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3]; 
    float total;
};

int main() {
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n]; 
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        
        s[i].total = 0;
        printf("Enter marks for 3 subjects: ");
        for (j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Total");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", 
                s[i].rollNo, s[i].name, s[i].total);
    }

    return 0;
}