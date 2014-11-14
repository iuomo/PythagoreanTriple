// example: Pythagorean Triple Check  constructor
// save file as pyth-triple-construct-intials.cpp  example pyth-triple-construct-cwc.cpp )
// https://github.com/tritechsc/PythagoreanTriple
#include <iostream>
#include <math.h>
using namespace std;

class Pythagorean {
    int x, y;
  public:
    Pythagorean (int,int);
    int ic () {return (x*y);}// change this to return the square root
    double c () {{return (x*y);}}// change this to return the square root
};
Pythagorean::Pythagorean (int a, int b) {
  x = a;
  y = b;
}

int main () {

int a;
//*********************
  for (a = 1; a < 21; a++){
    Pythagorean triangle (a,4);
    //*********************
    cout << "((a^2 + b^2)^(1/2) = " << triangle.c() <<  "  "<<triangle.ic() << endl;
  }
  return 0;
}
