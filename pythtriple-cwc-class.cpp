//class example
// example: Pythagorean Triple Check
// save file as pyth-triple-intials.cpp  pyth-triple-intials-cwc.cpp)
#include <math.h>
#include <iostream>
using namespace std;

class CalcPythagorean {
    int a, b;
  public:
    void set_values (int,int);
    double c () {return sqrt(a*a + b*b);}
    int ic() {return sqrt(a*a + b*b);}
};

void CalcPythagorean::set_values (int x, int y) {
  a = x;
  b = y;
}

int main () {
  CalcPythagorean triangle;

//*********************
// Write code to display Pythagorean triples with values of a and b from 1 to 20
// Be creative and unique with your output.
    triangle.set_values (3,1);
      if(triangle.c()== triangle.ic())
      {
           cout << "((a^2 + b^2)^(1/2) " << triangle.c() <<  "  "<<triangle.ic() << endl;
      }else
      {
           cout << "Not a Pythagorean triples " << endl;
      }


  //*********************
  // Output the results as a text file named
  // initials-PythagoreanTriples.txt and
  //upload to google drive in Computer Science Folder
  //Extra.  Push code back to github.com
  return 0;
}



