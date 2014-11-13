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

deflection(y,STEPS+1,LENGTH);
for (int i = 0; i<11; i++){
	cout << "y at " << 0.1*i << " = " << y[i] << endl;
}
deflection(y,STEPS+1,LENGTH/10);
for (int i = 0; i<11; i++){
	cout << "y at " << 0.1*i << " = " << y[i] << endl;
}
derivative(dydx,y,STEPS+1, LENGTH/10);
for (int i = 0; i<11; i++){
	cout << "dy/dx at " << 0.01*i << " = " << dydx[i] << endl;
}
derivative(d2ydx2,dydx,STEPS+1, LENGTH/10);
for (int i = 0; i<11; i++){
	cout << "d2y/dx2 at " << 0.01*i << " = " << d2ydx2[i] << endl;
}
bending(moments, d2ydx2, STEPS+1);
for (int i = 0; i<11; i++){
	cout << "M(x) at " << 0.01*i << " = " << moments[i] << endl;
}


return 0;
}
