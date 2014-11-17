// example: Pythagorean Triple Check  class example
// save file as pyth-triple-intials.cpp  example pyth-triple-intials-cwc.cpp)
// https://github.com/tritechsc/PythagoreanTriple
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
    triangle.set_values (3,1);//  triangle.set_values (x,y);  change the arguments to display a Pythagorean Triple
      if(triangle.c()== triangle.ic())
      {
           cout << "((a^2 + b^2)^(1/2) = " << triangle.c() <<  " = "<<triangle.ic() << endl;
      }else
      {
           cout << "Not a Pythagorean triples " << endl;
      }
  //*********************
 
  return 0;
}







