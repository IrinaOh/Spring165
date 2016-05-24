// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;
// Put your Address class here
class Address
{
public:
   // Methods
   void prompt();
   void display() const;
   
   // Constructors 
   Address();
   Address(string street, string city, string state, string zip);
   
   // Getters
   string getStreet() const { return street; }
   string getCity() const { return city; }
   string getState() const { return state; }
   string getZip() const { return zip; }
   
   // Setters
   void setStreet(string s)
   {
      street = s;
   }

   void setCity(string c)
   {
      city = c;
   }
   
   void setState(string st)
   {
      state = st;
   }
   
   void setZip(string z)
   {
      zip = z;
   }
   
private:
   string street;
   string city;
   string state;
   string zip;
   
};



#endif
