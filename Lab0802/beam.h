#ifndef BEAM_H
#define BEAM_H

#include <cmath>
using namespace std;

const double ELASTICITY = 200e6; // kiloNewtons / m2 
const double INERTIA = 8.3e-6; // m4 
const double LOAD = 100.0;  // kN / m 
const double LENGTH = 1.0;  // m 
const double PI = 4.0*atan(1.0); 
const double EPSILON = 1e-30; // tolerance 
const int STEPS = 10;

void deflection (double y[], int size, double interval);
void derivative (double dydx[], double y[], int size, double interval);
void bending (double moments[], double d2ydx2[], int size);

#endif
