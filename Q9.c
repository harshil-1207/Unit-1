//9. Convert Rupees Into Dollars
#include<stdio.h>
int main(){
float rupees , dollars;
    printf("RUPEES : ");  //enter input
    scanf("%f",&rupees);
dollars = rupees/48;  //conversion formula
    printf("DOLLARS : %f",dollars);
    return 0;
}

