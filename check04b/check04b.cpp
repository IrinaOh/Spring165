/*********************************************************************
 * File: check04b.cpp
 * Purpose: contains the main method to exercise the Date class.
 *********************************************************************/

#include "date.h"

#include <iostream>
using namespace std;

int main()
{
   // prompt for month, day, year
   cout << "Month: ";
   cin >> month;
   cout << "Day: ";
   cin >> day;
   cout << "Year: ";
   cin >> year;
   // create a Date object
   Date myDate;
   // set its values
   myDate.set(day, month, year);
   // call each display function
   myDate.displayAmerican();
   myDate.displayEuropean();
   myDate.displayISO();


   return 0;
}
