/*
Name: Arav Tuteja
Class: COMS-076
Date: 06/29/23
Instructor: Manny Kang
Purpose:
*/

#include <iostream>
#include "NumberList.h"
using namespace std;

int main() {
    NumberList myList;

    // Values to merge into the linked list
    double values[] = {5.4, 2.2, 3.9, 1.7, 6.0};
    int size = sizeof(values) / sizeof(values[0]);

    myList.mergeArray(values, size);
    myList.displayList();

    return 0;
}
