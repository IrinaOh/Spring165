// File: order.cpp

#include "order.h"
#include "address.h"
using namespace std;

// Put your the method bodies for your order class here
// Methods
  string Order :: getShippingZip()
  {
      Address address;
      string zip;
      address = customer.getAddress();
      zip = address.getZip();
      return zip;
  }
  
  double Order :: getTotalPrice()
  {
      double total;
      total = product.getTotalPrice() * quantity; 
   
   return total;   
  }
  
  void Order :: displayShippingLabel()
  {
      customer.display();
      return;
  }
  
  void Order :: displayReceipt()
  {
      customer.display();
      product.displayReceipt();
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
  