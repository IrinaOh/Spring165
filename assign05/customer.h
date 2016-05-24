// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"
#include <iostream>
using namespace std;


// put your Customer class here
class Customer
{
  public:
  void prompt();
  void display() const;
  
  //Getters
  string getName() const { return name; }
  Address getAddress() const { return address; }
  
  //Setters
  void setName(string n)
   {
      name = n;
   }

   void setAddress(Address a)
   {
      address = a;
   }
  
  private:
  string name;
  Address address;
  
    
};

#endif
