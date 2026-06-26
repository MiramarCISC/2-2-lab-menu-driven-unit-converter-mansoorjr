#include "converter.hpp"
#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    do {
        printMenu();
        cout << "Enter choice: ";
        cin >> choice;

        if (!isValidMenuChoice(choice)) {
            cout << "Invalid choice. Please enter 0-6." << endl << endl;
            continue;
        }

        if (choice == EXIT_CHOICE) {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << "Enter value: ";
        cin >> value;

        if (!isValidValueForChoice(choice, value)) {
            cout << "Invalid value. Please enter a non-negative number." << endl << endl;
            continue;
        }

        switch (choice) {
            case INCHES_TO_CENTIMETERS:
                result = inchesToCentimeters(value);
                cout << value << " inches = " << result << " centimeters" << endl;
                break;
            case CENTIMETERS_TO_INCHES:
                result = centimetersToInches(value);
                cout << value << " centimeters = " << result << " inches" << endl;
                break;
            case POUNDS_TO_KILOGRAMS:
                result = poundsToKilograms(value);
                cout << value << " pounds = " << result << " kilograms" << endl;
                break;
            case KILOGRAMS_TO_POUNDS:
                result = kilogramsToPounds(value);
                cout << value << " kilograms = " << result << " pounds" << endl;
                break;
            case FAHRENHEIT_TO_CELSIUS:
                result = fahrenheitToCelsius(value);
                cout << value << " Fahrenheit = " << result << " Celsius" << endl;
                break;
            case CELSIUS_TO_FAHRENHEIT:
                result = celsiusToFahrenheit(value);
                cout << value << " Celsius = " << result << " Fahrenheit" << endl;
                break;
        }
        cout << endl;

    } while (choice != EXIT_CHOICE);

    return 0;
}