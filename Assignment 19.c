#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[30];
    char gender[10];
    char doj[15];
    float salary;
};

int main() {
    int n, i, male = 0, female = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d (Name, Desig, Gender, DOJ, Salary):\n", i + 1);
        scanf("%s %s %s %s %f", emp[i].name, emp[i].designation, emp[i].gender, emp[i].doj, &emp[i].salary);
        
        if (strcmp(emp[i].gender, "Male") == 0) male++;
        else if (strcmp(emp[i].gender, "Female") == 0) female++;
    }

    printf("\nTotal number of employees = %d", n); [cite: 32]
    printf("\nMale employees = %d, Female employees = %d", male, female); [cite: 32]

    printf("\nEmployees with salary > 10000: "); [cite: 32]
    for (i = 0; i < n; i++) {
        if (emp[i].salary > 10000) printf("%s ", emp[i].name);
    }

    printf("\nEmployees with designation 'AsstManager': "); [cite: 32]
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "AsstManager") == 0) printf("%s ", emp[i].name);
    }
    printf("\n");

    return 0;
}