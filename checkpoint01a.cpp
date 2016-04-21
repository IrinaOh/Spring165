/***********************************************************************
* Program:
*    Checkpoint 01a, review  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int age;
   char name[256];
   
   cout << "Hello CS 165 World!" << endl;
   cout << "Please enter your first name: ";
   cin >> name;
   cout << "Please enter your age: ";
   cin >> age;
   
   cout << endl;
   cout << "Hello " << name << ", you are " << age << " years old." << endl;
   return 0;
}
