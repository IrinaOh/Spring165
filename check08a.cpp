/***********************************************************************
* Program:
*    Checkpoint 08a, Inheritance
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your Book class here
class Book
{
    public:
    string title;
    string author;
    int publicationYear;

    void promptBookInfo()
    {
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Publication Year: ";
        cin >> publicationYear;
        cin.ignore(256, '\n');
        return;
    }

    void displayBookInfo()
    {
        cout << title << " (" << publicationYear << ")" << " by " << author << endl;
        
        return;
    }

};

// TODO: Define your TextBook class here
class TextBook
{
    public:
    Book book;
    string subject;

    void promptSubject()
    {
        book.promptBookInfo();
        cout << "Subject: ";
        getline(cin, subject);   
        return;
    }    

    void displaySubject()
    {
        book.displayBookInfo();
        cout << "Subject: " << subject << endl;
        return;
    }

};

// TODO: Add your PictureBook class here
class PictureBook
{
    public:
    Book book;
    string illustrator;

    void promptIllustrator()
    {
        book.promptBookInfo();
        cout << "Illustrator: ";
        getline(cin, illustrator);
        return;
    }

    void displayIllustrator()
    {
        book.displayBookInfo();
        cout << "Illustrated by " << illustrator << endl;
        return;
    }
};


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare a Book object here and call its methods
   Book book;
   book.promptBookInfo();
   cout << endl;
   book.displayBookInfo();
   cout << endl;

   // Declare a TextBook object here and call its methods
   TextBook textbook;
   textbook.promptSubject();
   cout << endl;
   textbook.displaySubject();
   cout << endl;

   // Declare a PictureBook object here and call its methods
   PictureBook pictureBook;
   pictureBook.promptIllustrator();
   cout << endl;
   pictureBook.displayIllustrator();


   return 0;
}


