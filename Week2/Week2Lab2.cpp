/*
Name: Arav Tuteja
Class: COMS-076
Date: 06/29/23
Instructor: Manny Kang
Purpose: Demonstrates merging an array into the NumberList and displaying the list.
*/

#include <iostream>
#include "/Users/arav/CLionProjects/ComputerScience2/Week2/NumberList.h"

int main() {
    NumberList myList;

    double values[] = {5.4, 2.2, 3.9, 1.7, 6.0};
    int size = sizeof(values) / sizeof(values[0]);

    myList.mergeArray(values, size);
    myList.displayList();

    return 0;
}
