#include <iostream>
#include "extClockType.h"

using namespace std;

int main() {
    extClockType myClock(10, 15, 59, "UTC+1");
    extClockType anotherClock;

    cout << "My clock: ";
    myClock.printTime();
    cout << endl;

    cout << "Your clock: ";
    anotherClock.printTime();
    cout << endl;

    myClock.incrementSeconds();

    cout << "One second later, my clock: ";
    myClock.printTime();
    cout << endl;

    anotherClock.setTime(23, 59, 59);
    anotherClock.setTimeZone("UTC-5");

    cout << "Your clock set to almost midnight: ";
    anotherClock.printTime();
    cout << endl;

    anotherClock.incrementSeconds();

    cout << "One second later, your clock: ";
    anotherClock.printTime();
    cout << endl;

    return 0;
}
