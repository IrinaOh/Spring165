/***********************************************************************
* Program:
*    Assignment 03, Digital Forensics with corrupt files
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
#include <sstream>
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
   char accessFile[256]; 
   int fileLength; 
   int results[500];
   int numOfResults;    
};

void filePrompt(UserQuery &x);
void timePrompt(UserQuery &x);
void readFile(UserQuery &x, AccessRecord record[500]);
void parseFile(UserQuery &x, AccessRecord record[500]);
void parseLine(UserQuery &x, AccessRecord record[500]);
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
   // readFile(uQ1, record);
   parseFile(uQ1, record);
   parseLine(uQ1, record);
   fileSearch(uQ1, record);
   timePrompt(uQ1);
   displayResults(uQ1, record);
  
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
 * Function: parseLine
 * Purpose: parses file lines
 ***********************************************************************/
void parseLine(UserQuery &x, AccessRecord record[500])
{
    stringstream ss(x.accessFile);
   int i = 0;

    while (!ss.eof())
   {   
      ss >> record[i].fileName;
      ss >> record[i].user;
      ss >> record[i].timeStamp;
      if(record[i].timeStamp > 10000000000 | record[i].timeStamp < 1000000000)
         {cout << "Error parsing line: " << record[i].fileName << record[i].user << record[i].timeStamp;
          cout << endl;
         }
      i++;
   }
      x.fileLength = i; 

   if (ss.fail())
   {
      cout << "Error parsing line: " << record[i].fileName << record[i].user << record[i].timeStamp << endl;
   }
   
   return;
}

/**********************************************************************
 * Function: parseFile
 * Purpose: Reads file provides by user
 ***********************************************************************/
void parseFile(UserQuery &x, AccessRecord record[500])
{ 
   ifstream fin(x.accessFile);  
   if (fin.fail()) // check to see if the file correctly opened 
   {
      cout << "Unable to open: " << x.accessFile << endl;
      return; 
   }
   fin.close(); 
   return;
}

// /**********************************************************************
//  * Function: readFile
//  * Purpose: Reads file provides by user
//  ***********************************************************************/
// void readFile(UserQuery &x, AccessRecord record[500])
// {
//    int i = 0;
//    ifstream fin(x.accessFile);  
//    if (fin.fail()) // check to see if the file correctly opened 
//    {
//       cout << "Unable to open: " << x.accessFile << endl;
//       return; 
//    }
//    char text[256];
//    while (!fin.eof())
//    {   
//       fin >> record[i].fileName;
//       fin >> record[i].user;
//       fin >> record[i].timeStamp;
//       i++;
//       x.fileLength = i; 
//    }
                 
//     // close the file 
//    fin.close(); 
   
//    return;
// }
 
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