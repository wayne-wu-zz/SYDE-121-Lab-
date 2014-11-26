#include "shape.h"
#include <iostream>
using namespace std; 


void Shape::defineSize(int& shape_size){
	do {
	cout << "Enter the size of the shape":
	cin >> shape_size;
	cout << endl; 
	} while (shape_size<=1 || shape_size>=20);	
	 
}

void Shape::defineFill(bool& isFilled){
	cout << "Enter 0 for hollow, enter 1 for solid fill"
	cin >> isFilled;
	cout << endl;
	
}

void Shape::getSize(int &shape_size){
	cout << shape_size <<endl; 
}

void Shape::setSize(int &shape_size, int new_size){
	shape_size = new_size; 		
}

void Shape::printFilledShape(ofstream& out_stream){
	
}

void Shape::printHollowShape(ofstream& out_stream){
	
}

void Shape::getIsFilled(bool& isFilled){
	cout << isFilled <<endl; 
}


