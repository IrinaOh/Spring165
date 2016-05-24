// File: customer.cpp

#include "customer.h"
using namespace std;

// Put the method bodies for your customer class here
// Methods
   void Customer :: prompt()
   {
            
      return;
   }
   
   void Customer :: display() const
   {
      cout << name << endl; 
      address.display();
      
      return;
   }
   
   // Constructors 
   Customer :: Customer()
   {
      name = "unspecified";
   }
   
   Customer :: Customer(string n, Address a)
   {
      setName(n);
      setAddress(a);
   }