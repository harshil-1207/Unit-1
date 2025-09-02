#include <stdio.h>
int main() {
    float gross, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    net = gross - (gross * 0.10);
    printf("Net Sales = %.2f", net);
    return 0;
}