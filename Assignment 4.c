#include <stdio.h>

int main() {
    float bs, hra, ta, gs, pt, ns;

    printf("Enter the Basic Salary (BS): ");
    scanf("%f", &bs);
    hra = bs * 0.10;
    ta = bs * 0.05;
    gs = bs + hra + ta;
    pt = gs * 0.02;
    ns = gs - pt;
    printf("\n--- Salary Calculation ---\n");
    printf("Basic Salary (BS):    %.2f\n", bs);
    printf("HRA (10%% of BS):      %.2f\n", hra);
    printf("TA (5%% of BS):        %.2f\n", ta);
    printf("--------------------------\n");
    printf("Gross Salary (GS):    %.2f\n", gs);
    printf("Prof. Tax (2%% of GS):  %.2f\n", pt);
    printf("--------------------------\n");
    printf("NET SALARY (NS):      %.2f\n", ns);

    return 0;
}