/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

// put your class definition here
// along with the data members, and method prototypes
class Date
{
   public:
   void set(int x, int y, int z);
   void displayAmerican();
   void displayEuropean();
   void displayISO();

   private:
   int month;
   int day;
   int year;
      
};

#endif
