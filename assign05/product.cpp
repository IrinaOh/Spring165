/***************************************************************
 * File: product.cpp
 * Author: Edgar Wright
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iomanip>
using namespace std;


// put your method bodies here
void Product :: prompt()
{
      cout << "Enter name: "; 
      getline(cin, name);
      cout << "Enter description: ";
      getline(cin, description);
      cout << "Enter weight: ";
      cin >> weight;
   do
   {
      cout << "Enter price: ";
      cin >> basePrice;
      if (cin.fail())
      {
         cin.clear(); // clear the error state 
         cin.ignore(256, '\n');
         basePrice = -1;
      }
   }
   while (basePrice < 0);
   return;    
}

 void Product :: getSalesTax()
 {
    salesTax = basePrice * .06;
 }
 
 void Product :: getShippingCost()
 {
    if (weight < 5)
    {
       shipCost = 2;
    }
    else
    {
       shipCost = 2 + (weight - 5)*.1;
    }
 }
 


void Product :: displayAdvertising()
{
   cout << name << " - " << "$" << basePrice << endl;
   cout << "(" << description << ")" << endl;
   return;     
}

void Product :: displayInventory()
{
   cout << "$" << basePrice << " - " << name; 
   cout << " - " << weight << " lbs" << endl;
        
   return;
}

void Product :: displayReceipt()
{  
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   getSalesTax();
   getShippingCost();
   
   cout << name << "\n"
        << "  Price:" 
        << setw(10) << "$"
        << setw(8) << basePrice << "\n";
   cout << "  Sales tax:"
        << setw(6) << "$"
        << setw(8) << salesTax << endl;
   cout << "  Shipping cost:"
        << setw(2) << "$"
        << setw(8) << shipCost << endl;
   cout << "  Total:"
        << setw(10) << "$"
        << setw(8) << basePrice + salesTax + shipCost << endl;
   
   return;
}

// Constructors 
Product :: Product()
{
      name = "none";
      description = "";
      weight = 0;
      basePrice = 0;      
}

Product :: Product(string n, string d, double w, double bP)
{
      name = n;
      description = d;
      weight = w;
      basePrice = bP;
}