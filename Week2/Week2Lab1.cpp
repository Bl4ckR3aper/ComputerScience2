/*
Name: Arav Tuteja
Class: COMS-076
Date: 06/28/23
Instructor: Manny Kang
Purpose:
*/

#include <iostream>
using namespace std;

int main(){
    cout << "integer:  " << endl << "min: " << min(3, 4) << endl << "max: " << max(3, 4) << endl;
    cout << "float:  " << endl << "min: " << min(-3.33, 0.01226) << endl << "max: " << max(-3.33, 0.01226) << endl;
    cout << "string:  " << endl << "min: " << min("h", "z") << endl << "max: " << max("h", "z");
};

template <typename T>
T min(T one, T two){
    if (one > two){
        return two;
    }
    else{
        return one;
    }
}
template <typename A>

A max(A one, A two){
    if (one > two){
        return one;
    }
    else{
        return two;
    }
}