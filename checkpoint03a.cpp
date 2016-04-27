/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

int prompt() throw (const char *);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
	try
	{
		int number = prompt();
		cout << "The number is " << number << "." << endl;
	}
	catch (const char * message)
	{
		cout << "Error: The number cannot be " << message << endl;
	}
   
   
   //system("pause");
   return 0;
}

/**********************************************************************
* Function: prompt
* Purpose: Prompts user for number and returns it.
***********************************************************************/
int prompt() throw (const char *)
{
	int userNum;

	cout << "Enter a number: ";
	cin >> userNum;
	if (userNum < 0)
	{
		throw "negative.";
	}
	if (userNum > 100)
	{
		throw "greater than 100.";
	}
	if (userNum%2)
	{
		throw "odd.";
	}
	return userNum;
}