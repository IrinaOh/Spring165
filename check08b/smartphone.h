/****************
 * smartphone.h
 ****************/

#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include <iostream>
#include <string>
using namespace std;
#include "phone.h"

// TODO: Put your SmartPhone definition here
class SmartPhone
{
    private:
    string email;

    public:
    Phone phone;
    void prompt();
    void display();
};
#endif
