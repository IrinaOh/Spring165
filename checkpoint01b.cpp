/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

void getSize(int &size);
void getList(int size, int list[]);
void displayMultiples(int size, int list[]);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   
   int list[256];
   int size;
   
   getSize(size);   
   getList(size, list);
   displayMultiples(size, list);
   
   return 0;
}

/**********************************************************************
 * Function: displayMultiples
 * Purpose: Displays numbers if divisible by 3.
 ***********************************************************************/
void displayMultiples(int size, int list[])
{
   cout << "The following are divisible by 3:" << endl;
   
   for (int i = 0; i < size; i++)
   {
      if (list[i] % 3 == 0 )
      {
         cout << list[i] << endl;
      }
   }
   
   return;
}

/**********************************************************************
 * Function: getList
 * Purpose: Prompts user for list of numbers.
 ***********************************************************************/
void getList(int size, int list[])
{
   for (int i = 0; i < size; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> list[i];
   }
   cout << endl;
   return;
}

/**********************************************************************
 * Function: getSize
 * Purpose: Prompts user for size of list.
 ***********************************************************************/
void getSize(int &size)
{
  
   
   cout << "Enter the size of the list: ";
   cin >> size;
   
   return;
}