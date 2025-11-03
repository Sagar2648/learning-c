#include <stdio.h>

int main () {

    // TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C'){
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = ( celsius * 9 / 5) + 32;
        printf("%.2f° Celsius is equal to %.2f° Fahrenheit", celsius, fahrenheit);
    }
    else if (choice == 'F'){
        // F to C 
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit -32 ) * (5/9);
        printf("%.2f° fahrenheit is equals to %.2f° Celsius", fahrenheit, celsius);
    }
    else {
        printf("Invalid Choice! Please select C or F\n");
    }

    return 0;
}