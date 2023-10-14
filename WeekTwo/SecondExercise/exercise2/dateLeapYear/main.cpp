#include <iostream>
#include "dateType.h"


int main() {
    int month, day, year;

    std::cout << "Enter a date (month day year): ";
    std::cin >> month >> day >> year;

    dateType myDate(month, day, year);
    std::cout << "Date 1: ";
    myDate.printDate();
    std::cout << std::endl;

    if (myDate.isLeapYear()) {
        std::cout << "This is a leap year" << std::endl;
    }
    else {
        std::cout << "This is not a leap year" << std::endl;
    }

    return 0;
}
