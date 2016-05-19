/***************************************************************
 * File: product.h
 * Author: Edgar Wright
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

// put your class definition here
class Product
{
    public: 
    void prompt();
    void displayAd();
    void displayInv();
    void displayReceipt();  
  
    private:
    string productName;
    double productPrice;
    double productWeight;
    string productDescription;
    double shipCost;
    double salesTax;
    
    void getSalesTax();
    void getShippingCost();
    void getTotalPrice();
    
}; 
#endif
