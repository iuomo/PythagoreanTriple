// example: Pythagorean Triple Check  constructor
//  This gives a better hint on how to display the text output
// save file as pyth-triple-construct-intials.cpp  example pyth-triple-construct-cwc.cpp )
// https://github.com/tritechsc/PythagoreanTriple
#include <iostream>
#include <math.h>
using namespace std;

class Pythagorean {
    int x, y;
  public:
    Pythagorean (int,int);
    int ic () {return sqrt(x*x + y*y);}// change this to return the square root
    double c () {{return sqrt(x*x+y*y);}}// change this to return the square root
};
Pythagorean::Pythagorean (int a, int b) {
  x = a;
  y = b;
}

int main () {

int a,b;
//*********************
b = 20;
  for (a = 1; a < 21; a++){
    Pythagorean triangle (a,b);
    //*********************
    if (triangle.c() == triangle.ic()){
        cout << "a b c " << a<<" " <<b <<" "<<triangle.c() <<  "  "<<triangle.ic() << endl;
    }
  }
  return 0;
}
