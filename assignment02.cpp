/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary:  This program returns the files accessed between 
*    the times specified. 
*    
*    
*    
*    
*
*    Estimated:  4.0 hrs   
*    Actual:     5.0 hrs
*      Setting up the struct array and I kept reading off the end.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct AccessRecord 
{
   long int timeStamp;
   char fileName[256];
   char user[256];
};

struct UserQuery 
{
   long int startTime;
   long int endTime;
   string accessFile; 
   int fileLength; 
   int results[500];
   int numOfResults;    
};

void filePrompt(UserQuery &x);
void timePrompt(UserQuery &x);
void readFile(UserQuery &x, AccessRecord record[500]);
void fileSearch(UserQuery &x, AccessRecord record[500]);
void displayResults(UserQuery  x, AccessRecord record[500]);
 
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   UserQuery uQ1; //uQ1 is user query number one. 
   AccessRecord record[500];
   
   filePrompt(uQ1);
   timePrompt(uQ1);
   readFile(uQ1, record);
   fileSearch(uQ1, record);
   displayResults(uQ1, record);
  
   system("pause");
   return 0;
}

/**********************************************************************
 * Function: filePrompt
 * Purpose: Prompts the user for a file name
 ***********************************************************************/
void filePrompt(UserQuery &x)
{
   cout << "Enter the access record file: ";
   cin >> x.accessFile;
   cout << endl;
   return;
}
 
/**********************************************************************
 * Function: timePrompt
 * Purpose: Prompts the user for a start and end time stamp.
 ***********************************************************************/
void timePrompt(UserQuery &x)
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
void readFile(UserQuery &x, AccessRecord record[500])
{
   int i = 0;
   ifstream fin(x.accessFile);  
   if (fin.fail()) // check to see if the file correctly opened 
   {
      cout << "Unable to open: " << x.accessFile << endl;
      return; 
   }
   
   while (!fin.eof())
   {   
      fin >> record[i].fileName;
      fin >> record[i].user;
      fin >> record[i].timeStamp;
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
void fileSearch(UserQuery &x, AccessRecord record[500])
{
   int j = 0;
   for (int i = 0; i < x.fileLength; i++)
   {
      if ( x.startTime <= record[i].timeStamp 
         && x.endTime >= record[i].timeStamp)
      {
         x.results[j] = i;
         j++;
      }
   }
   x.numOfResults = j;
   return;
}
 
/**********************************************************************
 * Function: displayResults
 * Purpose: Displays results from search.
 ***********************************************************************/
void displayResults(UserQuery  x, AccessRecord record[500])
{
   cout << endl;
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   cout << setw(15) << "Timestamp"
        << setw(20) << "File"
        << setw(20) << "User" 
        << endl; 
   cout << "--------------- ------------------- -------------------" << endl;

   for (int i = 0; i < x.numOfResults; i++)
   {
      int tempI = x.results[i];
      cout << setw(15) << record[tempI].timeStamp 
           << setw(20) << record[tempI].fileName
           << setw(20) << record[tempI].user
           << endl;
   }
   
   cout << "End of records" << endl;
   
   return;    
}    