/* Author: Ami Cutler
* Project One Clocks
* Date: 11/12/2023
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to generate a string of characters
string nCharString(char c, int n) {
    return string(n, c);
}

// Function to display the clocks
void displayClocks(int hour12, int minute, int second, int hour24) {
    // Generate a string of asterisks
    string asterisks = nCharString('*', 26);

    // Display the time in a centered format
    cout << asterisks + "\t\t\t" + asterisks << endl;
    cout << "*     12-Hour Clock      *\t\t\t*    24-Hour Clock       *" << endl;
    cout << "*     " << setw(2) << setfill('0') << (hour12 == 0 ? 12 : (hour12 > 12 ? hour12 - 12 : hour12)) << ":" << setw(2) << minute << ":" << setw(2) << second << (hour12 < 12 ? " AM" : " PM") << "\t *\t\t\t*    \t" << setw(2) << setfill('0') << hour24 << ":" << setw(2) << minute << ":" << setw(2) << second << "\t *" << endl;
    cout << asterisks + "\t\t\t" + asterisks << endl;
}

// Function to display the menu
void displayMenu() {
    // Generate a string of asterisks for the top and bottom borders
    string asterisks = nCharString('*', 26);

    // Display the menu
    cout << asterisks << endl;
    cout << "* 1 - Add One Hour       *" << endl; // Option to add one hour
    cout << "* 2 - Add One Minute     *" << endl; // Option to add one minute
    cout << "* 3 - Add One Second     *" << endl; // Option to add one second
    cout << "* 4 - Exit Program       *" << endl;
    cout << asterisks << endl;
}

int main() {
    int hour12 = 0;    // Initialize to 12:00:00 AM for 12-hour clock
    int minute = 0;     // Initialize minutes to 0
    int second = 0;     // Initialize seconds to 0
    int hour24 = 0;    // Initialize to 00:00:00 for 24 - hour clock

    int choice;
    cout << "Clock Program" << endl;

    do {
        displayClocks(hour12, minute, second, hour24); // Display the clocks
        displayMenu();   // Display the menu

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            hour12 = (hour12 + 1) % 24; // Increment the hour for 12-hour clock
            hour24 = (hour24 + 1) % 24; // Increment the hour for 24-hour clock
            break;
        case 2:
            minute = (minute + 1) % 60; // Increment the minute
            if (minute == 0) {
                hour12 = (hour12 % 12) + 1; // Increment the hour for 12-hour clock
                hour24 = (hour24 + 1) % 24; // Increment the hour for 24-hour clock
            }
            break;
        case 3:
            second = (second + 1) % 60; // Increment the second
            if (second == 0) {
                minute = (minute + 1) % 60; // Increment the minute
                if (minute == 0) {
                    hour12 = (hour12 % 12) + 1; // Increment the hour for 12-hour clock
                    hour24 = (hour24 + 1) % 24; // Increment the hour for 24-hour clock
                }
            }
            break;
        case 4:
            cout << "Exiting the program." << endl; // Exit the program
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}