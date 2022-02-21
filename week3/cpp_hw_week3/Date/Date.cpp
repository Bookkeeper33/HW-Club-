#include "Date.h"

enum MONTHS {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

void Date::validate(int day, int month, int year) {
    bool leap;

    if ( year <= 0 ) {
        throw InvalidDate("Invalid year.");
    }

    leap = ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if ( month < JAN || month > DEC ) {
        throw InvalidDate("Month should be in range 1 - 12.");
    }

    if ( month == APR || month == JUN || month == SEP || month == NOV ) {
        if ( day < 1 || day > 30 ) {
            throw InvalidDate("Day should be in range 1 - 30.");
        }
    } else if ( month == FEB && leap ) {
        if ( day < 1 || day > 29 ) {
            throw InvalidDate("Day should be in range 1 - 29.");
        }
    } else if ( month == FEB && !leap ) {
        if ( day < 1 || day > 28 ) {
            throw InvalidDate("Day should be in range 1 - 28.");
        }
    } else {
        if ( day < 1 || day > 31 ) {
            throw InvalidDate("Day should be in range 1 - 31.");
        }
    }
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
    this->validate(day, month, year);
}

Date::~Date() {}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << "-" << date.getMonth() << "-" << date.getYear();
    return out;
}