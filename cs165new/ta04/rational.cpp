/***************************************************************
 * File: rational.cpp
 * Author: Edgar Wright
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"

#include <iostream>
using namespace std;

// put your method bodies here
void Rational :: prompt()
{
    cout << "Top: ";
    cin >> top;
    
    cout << "Bottom: ";
    cin >> bottom;
}
void Rational :: diplay()
{
 cout << top 
      << "/" 
      << bottom 
      << endl; 
 cout << combTop 
      << "/" 
      << combBottom 
      << endl; 
        
}
void Rational :: displayDecimal()
{
    float num = (float)top / bottom;
    
    cout << num << endl;
}
void multiplyBy()
{
    cout << "2nd Top: ";
    cin >> top2;
    
    cout << "2nd Bottom: ";
    cin >> bottom2;
    
    combTop = top * top2;
    combBottom = bottom * bottom2;
    
}
void reduce();
