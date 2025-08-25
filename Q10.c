//10. Convert Dollars Into Pounds
#include<stdio.h>
int main(){
float rupees , dollars , pounds;
    printf("Enter Dollars : ");
    scanf("%f",&dollars);
rupees = dollars*48;  // convert to rupees
pounds = rupees/70;   // convert to pounds
    printf("Pounds : %f",pounds);
    return 0;
}
