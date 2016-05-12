/***************************************************************
 * File: ta04.cpp
 * Author: Edgar Wright
 * Purpose: Contains the main function to test the Rational class.
 ***************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "rational.h"

int main()
{
   // Declare your Rational object here
   Rational rational;

   // Call your prompt function here
   rational.prompt();

   // Call your display functions here
   rational.display();
   rational.displayDecimal();
   
   return 0;
}
