#include <stdio.h>
int main() {
    float h, l, area;
    printf("Enter height and base: ");
    scanf("%f %f", &h, &l);
    area = (h * l) / 2;
    printf("Area = %.2f", area);
    return 0;
}