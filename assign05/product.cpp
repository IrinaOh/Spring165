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
      getline(cin, productName);
      cout << "Enter description: ";
      getline(cin, productDescription);
      cout << "Enter weight: ";
      cin >> productWeight;
   do
   {
      cout << "Enter price: ";
      cin >> productPrice;
      if (cin.fail())
      {
         cin.clear(); // clear the error state 
         cin.ignore(256, '\n');
         productPrice = -1;
      }
   }
   while (productPrice < 0);
   return;    
}

 void Product :: getSalesTax()
 {
    salesTax = productPrice * .06;
 }
 
 void Product :: getShippingCost()
 {
    if (productWeight < 5)
    {
       shipCost = 2;
    }
    else
    {
       shipCost = 2 + (productWeight - 5)*.1;
    }
 }
 


void Product :: displayAd()
{
   cout << productName << " - " << "$" << productPrice << endl;
   cout << "(" << productDescription << ")" << endl;
   return;     
}

void Product :: displayInv()
{
   cout << "$" << productPrice << " - " << productName; 
   cout << " - " << productWeight << " lbs" << endl;
        
   return;
}

void Product :: displayReceipt()
{  
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   getSalesTax();
   getShippingCost();
   
   cout << productName << "\n"
        << "  Price:" 
        << setw(10) << "$"
        << setw(8) << productPrice << "\n";
   cout << "  Sales tax:"
        << setw(6) << "$"
        << setw(8) << salesTax << endl;
   cout << "  Shipping cost:"
        << setw(2) << "$"
        << setw(8) << shipCost << endl;
   cout << "  Total:"
        << setw(10) << "$"
        << setw(8) << productPrice + salesTax + shipCost << endl;
   
   return;
}