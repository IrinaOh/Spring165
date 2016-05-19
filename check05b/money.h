/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

public:
   void prompt();
   void display() const;
  
  // Constructors
  Money();
  Money(int dollars);
  Money(int dollars, int cents);
  

  // Getters
   int getDollars() const
   {
       return dollars;
   }
   
   int getCents() const
   {
       return cents;
   }
   
   // Setters
   void setDollars(int d)
   {
        if (d < 0)
      {
        dollars = -(d);  
      }
      else 
      {
        
       dollars = d;
      }
   }
   
    void setCents(int c)
   {
      if (c < 0)
      {
        cents = -(c);  
      }
      else 
      {
        cents = c;
      }
   }
};

#endif
