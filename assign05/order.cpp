// File: order.cpp

#include "order.h"
using namespace std;

// Put your the method bodies for your order class here
// Methods
  string Order :: getShippingZip()
  {
      string zip;
      zip = Address.zip;
      return zip;
  }
  double Order :: getTotalPrice()
  {
   
   return 5;   
  }
  void Order :: displayShippingLabel()
  {
      cout << name << endl;
      cout << street << endl;
      cout << city << ", " << state << " " << zip << endl;
      return;
  }
  
  // Constructors
  Order :: Order()
  {
      quantity = 0;
      
  }
  
  Order :: Order(Product p, int q, Customer c)
  {
      setProduct(p);
      setQuantity(q);
      setCustomer(c);
  }
  