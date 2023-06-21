//
// Created by Arav Tuteja on 6/20/23.
//

#include "Date.h"

void Date::setDate(int d) {
    while (d < 1 || d > 31) {
        cout << "Give a valid date";
        cin >> d;
    }
    date = d;
}

void Date::setMonth(int m) {
    while (m < 1 || m > 12) {
        cout << "Give a valid month";
        cin >> m;
    }
    month = m;
}

void Date::setYear(int y) {
    year = y;
}

void Date::format1() {
    cout << month << "/" << date << "/" << to_string(year).substr(0, 2);
}

void Date::format2() {
    cout << monthName(month) << " " << date << " , " << year;
}

void Date::format3() {
    cout << date << " " << monthName(month) << "  " << year;
}

string Date::monthName(int month) {
    string name;
    switch (month) {
        case 1:
            name = "January";
            break;
        case 2:
            name = "February";
            break;
        case 3:
            name = "March";
            break;
        case 4:
            name = "April";
            break;
        case 5:
            name = "May";
            break;
        case 6:
            name = "June";
            break;
        case 7:
            name = "July";
            break;
        case 8:
            name = "August";
            break;
        case 9:
            name = "September";
            break;
        case 10:
            name = "October";
            break;
        case 11:
            name = "November";
            break;
        case 12:
            name = "December";
            break;
        default:
            name = "Invalid month";
            break;
    }
    return name;
}
