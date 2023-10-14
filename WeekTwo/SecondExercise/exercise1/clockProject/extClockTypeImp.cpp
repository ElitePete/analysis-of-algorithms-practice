#include "extClockType.h"
#include <iostream>


void extClockType::setTimeZone(const std::string& tz)
{
    timeZone = tz;
}

std::string extClockType::getTimeZone() const
{
    return timeZone;
}

void extClockType::printTime() const
{
    clockType::printTime();
    std::cout << " " << timeZone;
}

extClockType::extClockType(int hours, int minutes, int seconds, const std::string& tz)
    : clockType(hours, minutes, seconds)
{
    setTimeZone(tz);
}

extClockType::extClockType()
    : clockType()
{
    setTimeZone("UTC+0");
}
//test
void extClockType::setTime(int hours, int minutes, int seconds, const std::string& tz)
{
    clockType::setTime(hours, minutes, seconds);
    setTimeZone(tz);
}
void extClockType::setTime(int hours, int minutes, int seconds)
{
    clockType::setTime(hours, minutes, seconds);
}