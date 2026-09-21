#include <stdio.h>
#include <stdlib.h>

int main() {

    char *unitString;
    char *inputTemperatureString;
    char unit;
    float inputTemperature = 0.0f;
    float convertedTemperature = 0.0f;

    printf("Welcome to the Fahrenheit to Celsius Calculator!\n");
    printf("Enter 'c' to convert from Fahrenheit to Celsius or 'f' to convert from Celsius to Fahrenheit: ");
    scanf("%s", unitString);

    unit = unitString[0];

    printf("%c\n", unit);

    printf("Enter the value you want to convert: ");
    scanf("%s", inputTemperatureString);

    inputTemperature = atof(inputTemperatureString);

    if (unit == 'c') {
        convertedTemperature = (5.0/9) * (inputTemperature - 32);
        printf("Converted %.2f\xc2\xb0 F to %.2f\xc2\xb0 C\n", inputTemperature, convertedTemperature);
    } else {
        convertedTemperature = ((9.0/5) * (inputTemperature)) + 32;
        printf("Converted %.2f\xc2\xb0 C to %.2f\xc2\xb0 F\n", inputTemperature, convertedTemperature);
    }

    return 0;
}