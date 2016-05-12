/***********************************************************************
* Program:
*    Checkpoint 04a, Classes  
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;
class Book {
    //member values
    string title;
    string author;
    //member methods
    public:
    void prompt();
    void display();    
};

void Book :: prompt()
{
    cout << "Title: ";
    getline(cin,  title);
 
    cout << "Author: ";
    getline(cin, author); 
    return;
}

void Book :: display()
{
    cout << "\"" << title << "\"" << " by " << author << endl; 
    return;
}

int main()
{
   Book book;
   
   book.prompt();
   
   book.display();
   
    return 0;
}