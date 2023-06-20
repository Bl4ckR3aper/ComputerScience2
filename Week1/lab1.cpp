/*
Name: Arav Tuteja
Class: COMS-076
Date: 06/20/23
Instructor: Manny Kang
Purpose: The purpose of this code is to provide a class implementation for managing and formatting dates, allowing users to set a date, month, and year, and then output the formatted date in three different formats. It aims to ensure valid input and facilitate easy conversion between different date representations.
 */

#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    Date date;

    // Set the date, month, and year using the setter methods
    date.setDate(20);
    date.setMonth(6);
    date.setYear(2023);

    // Format and output the date using format1
    date.format1();
    cout << endl;

    // Format and output the date using format2
    date.format2();
    cout << endl;

    // Format and output the date using format3
    date.format3();

    return 0;
}
