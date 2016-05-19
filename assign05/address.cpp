// File: address.cpp

#include "address.h"

// Put your method bodies for the address class here
// Methods
   void Address :: prompt()
   {
      
   }
   
   void Address :: display() const
   {
      
   }
   
   // Constructors 
   Address :: Address()
   {
      street = "unknown";
      city = "";
      state = "";
      zip = "00000"
   }
   Address :: Address(string street, string city, string state, string zip);