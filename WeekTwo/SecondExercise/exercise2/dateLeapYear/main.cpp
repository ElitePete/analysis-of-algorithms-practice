#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    int month, day, year;

    cout << "Enter a date (month day year): ";
    cin >> month >> day >> year;

    dateType myDate(month, day, year);
    cout << "Date 1: ";
    myDate.printDate();
    cout << endl;

    if (myDate.isLeapYear()) {
        cout << "This is a leap year" << endl;
    }
    else {
        cout << "This is not a leap year" << endl;
    }

    return 0;
}
