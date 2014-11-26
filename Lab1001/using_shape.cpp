#include <iostream>
#include <fstream>
using namespace std;
#include "shape.h"

int main()
{
    // Shape object declarations
    Square my_square;
    Diamond my_diamond;
    Pyramid my_pyramid;
    Triangle my_triangle;
    
    // Open output stream and check for any errors
    ofstream fout;
    fout.open("output.txt");
    if (fout.fail()) {
       cout << "Error occurred opening output.txt\n";
       system("pause");
       exit(EXIT_FAILURE);
    }
    
    // initialize my_square and print to file
    my_square.defineSize();
    my_square.defineFill();
    
    if (my_square.getIsFilled() == true){
      my_square.printFilledShape(fout);
    } else {
      my_square.printHollowShape(fout);
    }

    // initialize my_diamond and print to file
    my_diamond.defineSize();
    my_diamond.defineFill();
    
    if (my_diamond.getIsFilled() == true){
      my_diamond.printFilledShape(fout);
    } else {
      my_diamond.printHollowShape(fout);
    }
    
    // initialize my_pyramid and print to file
    my_pyramid.defineSize();
    my_pyramid.defineFill();
    
    if (my_pyramid.getIsFilled() == true){
      my_pyramid.printFilledShape(fout);
    } else {
      my_pyramid.printHollowShape(fout);
    }

    // initialize my_triangle and print to file
    my_triangle.defineSize();
    my_triangle.defineFill();
    
    if (my_triangle.getIsFilled() == true){
      my_triangle.printFilledShape(fout);
    } else {
      my_triangle.printHollowShape(fout);
    }

    fout.close();
    
   system("pause");
   return 0;
}
