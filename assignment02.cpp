/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    
*    
*    
*    
*    
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

struct AccessRecord {
   long int timeStamp;
   char fileName[256];
   char user[256];
};

struct UserQuery {
   long int startTime;
   long int endTime;
   char accessFile[256];   
};

 void filePrompt(UserQuery & x);
 void timePrompt(UserQuery & x);
 
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
 UserQuery c1;
   
   filePrompt(c1);
   timePrompt(c1);
   
   return 0;
}

/**********************************************************************
 * Function: filePrompt
 * Purpose: Prompts the user for a filename
 ***********************************************************************/
 void filePrompt(UserQuery & x)
 {
    cout << "Enter the access record file: ";
    cin >> x.accessFile;
    
    return;
 }
 /**********************************************************************
 * Function: timePrompt
 * Purpose: Prompts the user for a start and end timestamp.
 ***********************************************************************/
 void timePrompt(UserQuery & x)
 {
    cout << "Enter the start time: ";
    cin >> x.startTime;
    cout << "Enter the end time: ";
    cin >> x.endTime;
    
    return;
 }
 /**********************************************************************
 * Function: fileSearch
 * Purpose: Searches and returns files that were accessed between 
 * start and end time stamps. 
 ***********************************************************************/
 void fileSearch()
 {
    
    return;
 }
 
 /**********************************************************************
 * Function: displayResults
 * Purpose: Displays results from search.
 ***********************************************************************/
 void displayResults()
{
   
   return;    
}    