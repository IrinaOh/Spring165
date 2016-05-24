// File: address.cpp

#include "address.h"
using namespace std;

// Put your method bodies for the address class here
// Methods
   void Address :: prompt()
   {
      cout << "Enter Street: "; 
      getline(cin, street);
      cout << "Enter City: ";
      getline(cin, city);
      cout << "Enter State: ";
      cin >> state;
      cout << "Enter Zip: ";
      cin >> zip;
      
      return;
   }
   
   void Address :: display() const
   {
      cout << street << endl;
      cout << city << ", " << state << " " << zip << endl;
      
      return;
   }
   
   // Constructors 
   Address :: Address()
   {
      street = "unknown";
      city = "";
      state = "";
      zip = "00000";
   }
   Address :: Address(string s, string c, string st, string z)
   {
      setStreet(s);
      setCity(c);
      setState(st);
      setZip(z);  
   };