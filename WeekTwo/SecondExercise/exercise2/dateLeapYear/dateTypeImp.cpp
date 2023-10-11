#include "dateType.h"
#include <iostream>
using namespace std;

void dateType::setDate(int month, int day, int year) {
    if (year > 0) {
        dYear = year;
    }
    else {
        dYear = 1900;
    }

    if (month >= 1 && month <= 12) {
        dMonth = month;
    }
    else {
        dMonth = 1;
    }

    if (day >= 1 && day <= 31) {
        if (month == 2 && (day > 29 || (day == 29 && !isLeapYear()))) {
            dDay = 28;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
            dDay = 30;
        }
        else {
            dDay = day;
        }
    }
    else {
        dDay = 1;
    }
    //attempt
    if (day >= 1 && day <= 31) {
        if (month == 2 && (day > 29 || (day == 29 && !isLeapYear()))) {
            dDay = 1;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
            dDay = 1;
        }
        else {
            dDay = day;
        }
    }
    else {
        dDay = 1;
    }
}

int dateType::getDay() const {
    return dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getYear() const {
    return dYear;
}

void dateType::printDate() const {
    cout << dMonth << "-" << dDay << "-" << dYear;
}

bool dateType::isLeapYear() {
    return (dYear % 400 == 0 || (dYear % 100 != 0 && dYear % 4 == 0));
}

dateType::dateType(int month, int day, int year) {
    setDate(month, day, year);
}
