//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 08 Assignment: 02
// 
// Filename: beambend.cpp
// Date submitted: 13/11/14
// 
// We hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of our own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
// Pair Programming Work Declaration: 
// Wayne Wu Completed 50% of the assignment. 
// Brian So Completed 50% of the assignment. 
// 
//*********************************************

#include "beam.h"
#include <iostream>
using namespace std;


void deflection (double y[], int size, double interval);
void derivative (double dydx[], double y[], int size, double interval);
void bending (double moments[], double d2ydx2[], int size);

int main (){
	double y[STEPS+1] = {0.0};
	double dydx[STEPS+1] = {0.0};
	double d2ydx2[STEPS+1] = {0.0};
	double moments[STEPS+1] = {0.0};
	
	deflection(y,STEPS+1,LENGTH); //deflection y(x)
		for (int i = 0; i<11; i++){
			cout << "y at " << 0.1*i << " = " << y[i] << endl;
		}
		cout << endl;
	derivative(dydx, y, STEPS+1, LENGTH); // first derivate , y'(x)
		for (int i = 0; i<11; i++){
			cout << "dy/dx at " << 0.1*i << " = " << dydx[i] << endl;
		}
		cout << endl;
	derivative(d2ydx2,dydx,STEPS+1, LENGTH); // second derivate, y''(x)
		for (int i = 0; i<11; i++){
			cout << "d2y/dx2 at " << 0.1*i << " = " << d2ydx2[i] << endl;
		}
		cout << endl;
	bending(moments, d2ydx2, STEPS+1); // bending moments M(x) = EIy''(x)
		for (int i = 0; i<11; i++){
			cout << "M(x) at " << 0.1*i << " = " << moments[i] << endl;
		}
		cout << endl;

return 0;
}
