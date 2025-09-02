#include <stdio.h>
int main() {
    float l, area, peri;
    printf("Enter length of square: ");
    scanf("%f", &l);
    area = l * l;
    peri = 4 * l;
    printf("Area = %.2f, Perimeter = %.2f", area, peri);
    return 0;
}