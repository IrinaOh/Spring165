// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"
#include <iostream>
using namespace std;


// Put your Order class here
class Order
{
  public:
  string getShippingZip();
  double getTotalPrice();
  void displayShippingLabel();
  void displayReceipt();
  
  Order();
  Order(Product p, int q, Customer c);
  
  // Getters
  Product getProduct() const { return product; }
  int getQuantity() const { return quantity; }
  Customer getCustomer() const { return customer; }
  
  // Setters
  void setProduct(Product p)
  {
      product = p;
  }
  
  void setQuantity(int q)
  {
      quantity = q;
  }
  
  void setCustomer(Customer c)
  {
      customer = c;
  }
  
  
  private:
  Product product;
  int quantity;
  Customer customer;
  
  
    
};

#endif
