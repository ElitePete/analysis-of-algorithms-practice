#include <iostream>
#include "extClockType.h"


int main() {
    extClockType myClock(10, 15, 59, "UTC+1");
    extClockType anotherClock;
    clockType employee[10];


    std::cout << "My clock: ";
    myClock.printTime();
    std::cout << std::endl;

    std::cout << "Your clock: ";
    anotherClock.printTime();
    std::cout << std::endl;

    myClock.incrementSeconds();

    std::cout << "One second later, my clock: ";
    myClock.printTime();
    std::cout << std::endl;

    anotherClock.setTime(23, 59, 59);
    anotherClock.setTimeZone("UTC-5");

    std::cout << "Your clock set to almost midnight: ";
    anotherClock.printTime();
    std::cout << std::endl;

    anotherClock.incrementSeconds();

    std::cout << "One second later, your clock: ";
    anotherClock.printTime();
    std::cout << std::endl;




    for (int j = 0; j < 10; j++)
    {
        employee[j].setTime(8, 0, 0);

        std::cout << "Employee " << (j + 1) << " arrived at ";
        employee[j].printTime();
        std::cout << std::endl;
    }



    return 0;
}
