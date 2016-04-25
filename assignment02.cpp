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
#include <fstream>
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
   int fileLength; 
   int results[500];    
};

 void filePrompt(UserQuery & x);
 void timePrompt(UserQuery & x);
 void readFile(UserQuery & x, AccessRecord record[500]);
 void fileSearch(UserQuery & x, AccessRecord record[500]);
 
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
 UserQuery uQ1; //uQ1 is user query one. 
 AccessRecord record[500];
   
   filePrompt(uQ1);
   timePrompt(uQ1);
   readFile(uQ1, record);
   fileSearch(uQ1, record);
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
    cout << endl;
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
 * Function: readFile
 * Purpose: Reads file provides by user
 ***********************************************************************/
 void readFile(UserQuery & x, AccessRecord record[500])
 {
    int i = 0;
    ifstream fin(x.accessFile);  
    if (fin.fail()) // check to see if the file correctly opened 
    return; 
    // fetch the data int data; 
    while (!fin.eof())
    {
      fin >> record[i].timeStamp;
      fin >> record[i].fileName;
      fin >> record[i].user;
      i++;
      x.fileLength = i; 
    }
                 
    // close the file 
    fin.close(); 
    
  return;
 }
 
 /**********************************************************************
 * Function: fileSearch
 * Purpose: Searches and returns files that were accessed between 
 * start and end time stamps. 
 ***********************************************************************/
 void fileSearch(UserQuery & x, AccessRecord record[500])
 {
    for(int i = 0; i < x.fileLength; i++){
       if ( x.startTime <= record[i].timeStamp && x.endTime >= record[i].timeStamp)
      {
         int j = 0;
         x.results[j] = i;
      };
    };
    return;
 }
 
 /**********************************************************************
 * Function: displayResults
 * Purpose: Displays results from search.
 ***********************************************************************/
 void displayResults(UserQuery & x, AccessRecord record[500])
{
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   cout << setw(15) << "Timestamp"
        << setw(35) << "File"
        << setw(55) << "User" 
        << endl; 
   cout << "--------------- ------------------- -------------------/n";
   
   for(int i = 0; i <= x.fileLength; i++)
   {
      int tempI = x.results[i];
      cout << setw(15) << record[tempI].timeStamp 
           << setw(35) << record[tempI].fileName
           << setw(55) << record[tempI].user
           << endl;
   }
   cout << "End of records" << endl;
   
   
   
   
   
   return;    
}    