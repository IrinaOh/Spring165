/*******************
 * smartphone.cpp
 *******************/

#include <iostream>
#include <string>
using namespace std;
#include "smartphone.h"

// TODO: Put your SmartPhone methods here
void SmartPhone :: prompt()
{
    phone.promptNumber();
    cout << "Email: ";
    getline(cin, email);
    return;
}

void SmartPhone :: display()
{
    phone.display();
    cout << email << endl;
    return;
}