/*********************
 * phone.cpp
 *********************/
#include "phone.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Put your phone class methods here...
void Phone :: promptNumber()
{
    
    cout << "Area Code: ";
    cin >> areaCode;
    cin.ignore(256, '\n');
     cout << "Prefix: ";
    cin >> prefix;
    cin.ignore(256, '\n');
     cout << "Suffix: ";
    cin >> suffix;
    cin.ignore(256, '\n');
    return;
}

void Phone :: display()
{
    
    cout << "(" << areaCode << ")" << prefix << "-" << suffix << endl;
    return;
}