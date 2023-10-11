#include "extClockType.h"
#include <iostream>

using namespace std;

void extClockType::setTimeZone(const string& tz)
{
    timeZone = tz;
}

string extClockType::getTimeZone() const
{
    return timeZone;
}

void extClockType::printTime() const
{
    clockType::printTime();
    cout << " " << timeZone;
}

extClockType::extClockType(int hours, int minutes, int seconds, const string& tz)
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