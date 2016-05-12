/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include "date.h"
#include <iostream>
using namespace std;

// Put your method bodies here...
void Date::set(int x, int y, int z)
{
   day = x;
   month = y;
   year =z;
}
void Date::displayAmerican()
{
   cout << month 
         << "/"
         << day
         << "/"
         << year
         << endl; 
}
void Date::displayEuropean()
{
   cout  << day 
         << "/"
         << month
         << "/"
         << year
         << endl; 
}
void Date::displayISO()
{
   cout << year
         << "-"
         << month
         << "-"
         << day
         << endl; 
}