#include <stdio.h>
int main() {
    float l, b, area, peri;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    area = l * b;
    peri = 2 * (l + b);
    printf("Area = %.2f, Perimeter = %.2f", area, peri);
    return 0;
}