/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother McCracken, CS165
* Author:
*    Edgar Wright
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct Complex {
   double real;
   double imaginary;
};

// TODO: Add your prompt function here
/**********************************************************************
 * Function: prompt
 * Purpose: Prompts user for complex numbers.
 ***********************************************************************/
void prompt(Complex & x)
{
    cout << "Real: ";
    cin >> x.real;
    cout << "Imaginary: ";
    cin >> x.imaginary; 
  
    cout << endl;
    
    return;
}

// TODO: Add your display function here
/**********************************************************************
 * Function: display
 * Purpose: Displays the added complex numbers.
 ***********************************************************************/
void display(Complex x)
{
    cout << x.real << "+" << x.imaginary << "i" << endl;
}
/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   // TODO: Fill in the body of the add function
   sum.real = c1.real + c2.real;
   sum.imaginary = c1.imaginary + c2.imaginary;
   
   return sum;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1;
   Complex c2;

   // Call your prompt function twice to fill in c1, and c2 
   prompt(Complex & c1);
   prompt(Complex & c2);

   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   sum = addComplex(Complex & c1, Complex & c2);
   
   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;
 
   return 0;
}


