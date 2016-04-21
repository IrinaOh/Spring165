/***********************************************************************
* Program:
*    Assignment 01, GENETIC GENEALOGY  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    This program compares to DNA strings and returns a percent 
*    match. 
*    
*    
*  
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      I forgot to add a 1 to a i
************************************************************************/

#include <iostream>
using namespace std;

void markerSeq(char dna10[51][10]);
void relativeNumber(int &relNum);
void relativeNames(char relName[51][256], int relNum);
void relativeSeq(char relName[51][256],char dna10[51][10], int relNum);
void results(char relName[51][256],char dna10[51][10], int relNum);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   char dna10[51][10] = {};
   char relName[51][256];
   char relativeDnaSeq [10][50];
   int relNum;
   
  
   
   markerSeq(dna10);
   relativeNumber(relNum);
   relativeNames(relName, relNum);
   relativeSeq(relName, dna10, relNum);
   results(relName, dna10, relNum);
   
   return 0;
}

/**********************************************************************
 * Function: markerSeq  
 * Purpose: requests the user's DNA sequence and stores it.
 ***********************************************************************/
void markerSeq(char dna10[51][10])
{
   cout << "Enter your DNA sequence: ";
   cin >> dna10[0]; 
   return;
}

/**********************************************************************
 * Function: relativeNumber  
 * Purpose: Requests the number of potential relatives and stores it.
 ***********************************************************************/
void relativeNumber(int &relNum)
{
   cout << "Enter the number of potential relatives: ";
   cin >> relNum;
   cout << endl;   
   return;
}

/**********************************************************************
 * Function: relativeNames
 * Purpose: Requests and stores relative names.
 ***********************************************************************/
void relativeNames(char relName[51][256], int relNum)
{
   for (int i = 0; i < relNum; i++)
   {
      cout << "Please enter the name of relative #" << i + 1 << ": ";
      cin >> relName[i + 1];
   }
   cout << endl;
   return;
}

/**********************************************************************
 * Function: relativeSeq
 * Purpose: Requests and stores relative DNA sequences.
 ***********************************************************************/
void relativeSeq(char relName[51][256],char dna10[51][10], int relNum)
{
   for (int i = 0; i < relNum; i++)
   {
      cout << "Please enter the DNA sequence for " << relName[i + 1];
      cout << ": ";
      cin >> dna10[i + 1];
   }
   cout << endl;
   return;
}

/**********************************************************************
 * Function: results
 * Purpose: Calculates and displays results.
 ***********************************************************************/
void results(char relName[51][256],char dna10[51][10], int relNum)
{
   int match;
   int percentMatch[256];
   
   for (int i = 0; i < relNum; i++)
   {
      match = 0;
      for (int j = 0; j < 10; j++)
      {
         if (dna10[0][j] == dna10[i + 1][j])
         {
            match++; 
         }
      }
      percentMatch[i] = match * 10;
   }
   
   for (int i = 0; i < relNum; i++)
   {
      cout << "Percent match for " << relName[i + 1] << ": ";
      cout << percentMatch[i] << "%" << endl;
   }
   return;
}

