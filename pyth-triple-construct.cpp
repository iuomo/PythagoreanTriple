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
    int ic () {return sqrt(x*x + y*y);}
    double c () {return sqrt(x*x+y*y);}
};
Pythagorean::Pythagorean (int a, int b) {
  x = a;
  y = b;
}

int main () {

int a,b;
//*********************
for (b = 1; b <= 1000; b++){
  for (a = 1; a <= 1000; a++){
    Pythagorean triangle (a,b);
    //*********************
    if (triangle.c() == triangle.ic()){
        cout << "a b c " << a<<" " <<b <<" "<<triangle.c() <<  "  "<<triangle.ic() << endl;
    }
  }/end a
}/end b
  return 0;
}
//wire code to display the Pythagorian Tiples with values of a and b ranging from 1 to 200
// Save the output as a text file names initial-pythagorenatiples.txt
//  Generate the text output as follows: C:\pathtocode\pyth-triple-construct-cwc.exe > pythagorenatiples.txt






