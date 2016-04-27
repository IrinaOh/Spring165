/***********************************************************************
* Program:
*    Checkpoint 03b, Errors  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

int prompt();

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int userNum = prompt();
   
   cout << "The number is " << userNum << "." << endl;
   
   
  return 0;
}

/**********************************************************************
 * Function: prompt
 * Purpose: Prompts user for information.
 ***********************************************************************/
int prompt()
{
   int number;
   
   do
   {
      cout << "Enter a number: ";
      cin >> number;
      
      if (cin.fail())
      {
         cout << "Invalid input." << endl;
         cin.clear();
         cin.ignore(256, '\n');
      }
      
   }
   while (!number);
   
   return number;
}