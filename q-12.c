#include <stdio.h>
int main() {
    float kg, grams;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    grams = kg * 1000;
    printf("Grams = %.2f", grams);
    return 0;
}