#include "beam.h"
#include <iostream>
using namespace std;


void deflection (double y[], int size, double interval);
void derivative (double dydx[], double y[], int size, double interval);
void bending (double moments[], double d2ydx2[], int size);

int main (){
double y[STEPS] = {0.0};
double dydx[STEPS] = {0.0};
double d2ydx2[STEPS] = {0.0};
double moments[STEPS] = {0.0};

deflection(y,STEPS,LENGTH);
cout << "y at 0 =" << y[0] << endl << "y at 0.1 =" << y[1] <<endl << y[2];
deflection(y,STEPS,LENGTH/10);
derivative(dydx,y,STEPS, LENGTH/10);
cout << "dy(0.01) = " << dydx[0] <<endl;
derivative(d2ydx2,dydx,STEPS, LENGTH/10);
cout << "d2y(0.01) = " <<d2ydx2[0] <<endl;
bending(moments, d2ydx2, STEPS);
cout << "M(0.01) = " << moments[0] <<endl;

return 0;
}
