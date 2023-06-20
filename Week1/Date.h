//
// Created by Arav Tuteja on 6/20/23.
//



#ifndef COMPUTERSCIENCE2_DATE_H
#define COMPUTERSCIENCE2_DATE_H
#include <iostream>
using namespace std;

/* Date class: The Date class represents a date consisting of a day, month, and year.
 * It provides methods to set and retrieve the date components, as well as format and output the date in different formats.
 * The class ensures the validity of the date by enforcing input restrictions and includes a utility method to convert
 * the month number to its corresponding name.
 */

class Date {
private:
    int date;
    int month;
    int year;

public:
    void setDate(int d);
    void setMonth(int m);
    void setYear(int y);
    void format1();
    void format2();
    void format3();
    string monthName(int month);
};

#endif //COMPUTERSCIENCE2_DATE_H
