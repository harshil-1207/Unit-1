//7. Convert Minute Into Hours
#include<stdio.h>
int main(){
float minutes , hours;
    printf("Enter Time In Minutes[in decimal]:"); //enter input
    scanf("%f",&minutes);
 hours = minutes/60; //conversion formula
    printf("Hours Equals To:%f",hours);
    return 0;
}
