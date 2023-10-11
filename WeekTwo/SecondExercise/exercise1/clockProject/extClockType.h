#pragma once

#ifndef H_extClockType
#define H_extClockType
#include "clockType.h"
#include <string>

class extClockType : public clockType
{
public:
    void setTimeZone(const std::string& tz);
    std::string getTimeZone() const;
    void printTime() const;
    void setTime(int hours, int minutes, int seconds, const std::string& tz);
    void setTime(int hours, int minutes, int seconds);


    extClockType(int hours, int minutes, int seconds, const std::string& tz);
    extClockType();

private:
    std::string timeZone;
};

#endif
