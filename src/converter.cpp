#include "converter.hpp"
#include <iostream>
using namespace std;

double inchesToCentimeters(double inches) {
    // Use the named constant CENTIMETERS_PER_INCH instead of 2.54
    return inches * CENTIMETERS_PER_INCH;
}

double centimetersToInches(double centimeters) {
    // Use the named constant CENTIMETERS_PER_INCH instead of 2.54
    return centimeters / CENTIMETERS_PER_INCH;
}

double poundsToKilograms(double pounds) {
    // Use the named constant POUNDS_PER_KILOGRAM instead of 2.20462
    return pounds / POUNDS_PER_KILOGRAM;
}

double kilogramsToPounds(double kilograms) {
    // Use the named constant POUNDS_PER_KILOGRAM instead of 2.20462
    return kilograms * POUNDS_PER_KILOGRAM;
}

double fahrenheitToCelsius(double fahrenheit) {
    // Use 5.0 and 9.0 to ensure decimal division
    return ((fahrenheit - 32) * 5.0) / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    // Use 9.0 and 5.0 to ensure decimal division
    return ((celsius * 9.0) / 5.0) + 32;
}

bool isValidMenuChoice(int choice) {
    return choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT;
}

bool requiresNonNegativeValue(int choice) {
    return choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS;
}

bool isValidValueForChoice(int choice, double value) {
    if (!isValidMenuChoice(choice)) {
        return false;
    }
    if (requiresNonNegativeValue(choice) && value < 0) {
        return false;
    }
    return true;
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}