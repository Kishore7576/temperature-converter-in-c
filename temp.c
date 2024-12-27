#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return fahrenheitToCelsius(fahrenheit) + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return celsiusToFahrenheit(kelvinToCelsius(kelvin));
}

int main() {
    int choice;
    double temperature, convertedTemp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature to convert: ");
    scanf("%lf", &temperature);

    switch (choice) {
        case 1:
            convertedTemp = celsiusToFahrenheit(temperature);
            printf("Converted Temperature: %.2f Fahrenheit\n", convertedTemp);
            break;
        case 2:
            convertedTemp = celsiusToKelvin(temperature);
            printf("Converted Temperature: %.2f Kelvin\n", convertedTemp);
            break;
        case 3:
            convertedTemp = fahrenheitToCelsius(temperature);
            printf("Converted Temperature: %.2f Celsius\n", convertedTemp);
            break;
        case 4:
            convertedTemp = fahrenheitToKelvin(temperature);
            printf("Converted Temperature: %.2f Kelvin\n", convertedTemp);
            break;
        case 5:
            convertedTemp = kelvinToCelsius(temperature);
            printf("Converted Temperature: %.2f Celsius\n", convertedTemp);
            break;
        case 6:
            convertedTemp = kelvinToFahrenheit(temperature);
            printf("Converted Temperature: %.2f Fahrenheit\n", convertedTemp);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
