//WAP to convert celcius into farenheit temperature.
#include <stdio.h>

float farenheit(float celcius);

int main(void) {
    float celcius;
    printf("Enter the Value of celcius:\n");
    scanf("%f",&celcius);
    printf("Value of farenheit is %.2f",farenheit(celcius));
    return 0;
}

float farenheit(float celcius){
    float result = ((celcius*9)/5 + 32);
    return result;
}
