#include <stdio.h>
int main() {
    float s1, s2, s3, total, avg;
    printf("Enter three subject marks: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    avg = total / 3;
    printf("Total = %.2f, Average = %.2f", total, avg);
    return 0;
}