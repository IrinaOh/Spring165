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
    void displayAdvertising();
    void displayInventory();
    void displayReceipt();  
    
    Product();
    Product(string n, string d, double w, double bP);
    
    //Getters
    string getName() const { return name; }
    string getDescription() const { return description; }
    double getBasePrice() const { return basePrice; }
    double getWeight() const { return weight; }
    
    //Setters
    void setName(string n)
    {
        name = n;
    }
    
    void setDescription(string d)
    {
        description = d;
    }
     
     void setBasePrice(double bP)
     {
         basePrice = bP;
     }
     
     void setWeight(double w)
     {
         weight = w;
     }
     
    private:
    string name;
    double basePrice;
    double weight;
    string description;
    
    double shipCost;
    double salesTax;
    
    void getSalesTax();
    void getShippingCost();
    void getTotalPrice();
    
}; 
#endif
