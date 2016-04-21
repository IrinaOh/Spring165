/**********************
 * A simple example...
 **********************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
   string file = "ta03_weather.txt";

   ifstream fin(file.c_str());

   string line;

   while (getline(fin, line))
   {
      string day;
      int high;
      int low;

      stringstream buffer(line);

      buffer >> day;
      buffer >> high;
      buffer >> low;

      // create a struct, and fill it here...
      // then call the display and pass it the struct

      if (buffer.fail())
      {
         cout << "#fail" << endl;
      }

      cout << "Day: " << day << " h: " << high << " l: " << low << endl;
   }


   fin.close();

   return 0;
}
