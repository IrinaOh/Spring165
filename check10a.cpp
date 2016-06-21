/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/
#include <vector>
#include <iostream>
#include <string>
using namespace std;



/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{

    std::vector <int> intVector;
	std::vector <string> stringVector;
    
   
    do
    {
        int value;
        cout << "Enter int: ";
        cin >> value;
        intVector.push_back(value);
    } while (intVector.back() != 0);
	
	intVector.pop_back();

	cout << "Your list is:" << endl;
	for (std::vector<int>::iterator it = intVector.begin();
		it != intVector.end(); ++it)
	{
		cout << *it << endl;
	}
	
	do
	{
		string valString;
		cout << "Enter string: ";
		getline(cin, valString);
		stringVector.push_back(valString);
	} while (stringVector.back() != "quit");

	stringVector.pop_back();

	cout << "Your list is:" << endl;
	for (std::vector<string>::iterator it1 = stringVector.begin();
		it1 != stringVector.end(); ++it1)
	{
		cout << *it1 << endl;
	}
	

   return 0;
}


