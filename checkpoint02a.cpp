/***********************************************************************
* Program:
*    Checkpoint 02a, Structs  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct User {
   char firstName[256];
   char lastName[256];
   int idNumber; 
};

int displayStudent();

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   displayStudent();
   return 0;
}

/**********************************************************************
 * Function: displayStudent
 * Purpose: Gets and displays student info
 ***********************************************************************/
int displayStudent()
{
   
   User student;
   
   cout << "Please enter your first name: ";
   cin >> student.firstName;
   cout << "Please enter your last name: ";
   cin >> student.lastName;
   cout << "Please enter your id number: ";
   cin >> student.idNumber;
   cout << endl;
   cout << "Your information:" << endl;
   cout << student.idNumber << " - " << student.firstName << " ";
   cout << student.lastName << endl;
   return 0;
}
